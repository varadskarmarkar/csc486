//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2017
// Real-Time Networking
//----------------------------------------------------------------------------- 

#include <stdio.h>
#include <string.h>
#include "Unused.h"
#include "Snake.h"

Medusa::Medusa()
: head(0)
{
}

Medusa::~Medusa()
{
	Snake *snakePointer = (Snake *)this->head;

	// delete every snake associated with Medusa
	while( snakePointer != 0 )
	{
		// squirrel away for delete
		Snake *pTmp = snakePointer;

		// advanced to next snake
		snakePointer = (Snake *)snakePointer->next;

		// goodbye old snake
		delete(pTmp);
	}
}

void Medusa::insertSnake( Snake &inSnake )
{
	// fix pointers
	if( this->head != 0 )
	{
		this->head->prev = &inSnake;
		inSnake.next = this->head;
	}
	// push to the front of head
	this->head = &inSnake;
}

Egg::Egg( char inA, double inB, int inX )
: a(inA),b(inB),x(inX)
{
}

SnakeLink::SnakeLink()
: next(0), prev(0)
{
}

Snake::Snake(unsigned int _key, char inA, double inB, int inX)
: key(_key)
{
	this->pEgg = new Egg( inA, inB, inX);
}

Snake::~Snake()
{
	delete pEgg;
}

// Accessors
const SnakeLink *Medusa::getHeadSnake( ) const
{
	return head;
}

const unsigned int Snake::getKey() const
{
	return this->key;
}

const Egg &Snake::getEgg() const
{
	return *this->pEgg;
}


// Read from a buffer
void Snake::deserialize( const char * const buffer )
{
	// do your magic here
    /*UNUSED_VAR(buffer);*/
	memcpy(this, buffer, sizeof(Snake));
	this->pEgg = new Egg();
	memcpy(this->pEgg, buffer + sizeof(Snake), sizeof(Egg));
}

// Write object to a buffer
void Snake::serialize( char * const buffer ) const
{
	// do your magic here
    /*UNUSED_VAR(buffer);*/
	memcpy(buffer, this, sizeof(Snake));
	memcpy(buffer + sizeof(Snake), this->pEgg, sizeof(Egg));
}

// Read from a buffer
void Medusa::deserialize( const char * const buffer )
{
	// do your magic here
    /*UNUSED_VAR(buffer);*/
	memcpy(this, buffer, sizeof(Medusa));

	// get the number of Snakes
	size_t numSnakes = 0;
	memcpy(&numSnakes, (buffer + sizeof(Medusa)), sizeof(int));

	// deserialize the Snakes
	if (numSnakes != 0)
	{
		const char* tmpBuffer = buffer + sizeof(Medusa) + sizeof(int);
		Snake** s = (Snake**)calloc(numSnakes, sizeof(Snake*));
		for (size_t i = 0; i < numSnakes; i++)
		{
			s[i] = new Snake();
			s[i]->deserialize(tmpBuffer);
			tmpBuffer += sizeof(Snake) + sizeof(Egg);
		}

		// relink
		for (size_t i = 0; i < numSnakes; i++)
		{
			i == 0 ? s[i]->prev = 0 : s[i]->prev = s[i - 1];
			i == numSnakes - 1 ? s[i]->next = 0 : s[i]->next = s[i + 1];
		}
		this->head = s[0];
	}
}

// Write object to a buffer
void Medusa::serialize( char * const buffer ) const
{
	// do your magic here
    /*UNUSED_VAR(buffer);*/
	memcpy(buffer, this, sizeof(Medusa));
	if (this->head != 0)
	{
		int numSnakes = 0;
		Snake* snakePointer = (Snake*)this->getHeadSnake();
		while (snakePointer != 0) {
			numSnakes++;
			snakePointer = (Snake*)snakePointer->next;
		}

		// serialize Snakes
		snakePointer = (Snake*)this->getHeadSnake();
		char* tmpBuffer = buffer + sizeof(Medusa);
		memcpy(tmpBuffer, &numSnakes, sizeof(int));

		tmpBuffer += sizeof(int);
		for (int i = 0; i < numSnakes; i++)
		{
			snakePointer->serialize(tmpBuffer);
			snakePointer = (Snake*)snakePointer->next;
			tmpBuffer += sizeof(Snake) + sizeof(Egg);
		}

	}
}
