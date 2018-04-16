//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2017
// Real-Time Networking
//----------------------------------------------------------------------------- 

#include <stdio.h>
#include <string.h>
#include "Unused.h"
#include "Bird.h"

// constructor
Bird::Bird()
: x(0), y(0), s(0)
{
}

// destructor
Bird::~Bird()
{
	//printf("Bird destructor\n");
	delete this->s;
}


// specialized constructor
Bird::Bird( int _x, short _y)
	: x(_x), y(_y)
{
	this->s = new char[55];
 	const char *refText =   "This is a test to have a very long string to Serialize";
	strcpy_s( this->s, 55, refText );
}

// accessor
int Bird::getX() const
{
	return this->x;
};

short Bird::getY() const
{
	return this->y;
};

// return a const read pointer to the string
const char *Bird::getS() const
{
	return this->s;
};

// Read from a buffer
void Bird::deserialize( const char * const buffer ) 
{
	// do your magic here
   UNUSED_VAR(buffer);
}

// Write object to a buffer
void Bird::serialize( char * const buffer ) const
{
	// do your magic here
   UNUSED_VAR(buffer);
}

