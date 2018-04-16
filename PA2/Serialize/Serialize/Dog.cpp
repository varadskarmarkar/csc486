//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2017
// Real-Time Networking
//----------------------------------------------------------------------------- 

#include <string.h>
#include "Unused.h"
#include "Dog.h"


Dog::Dog(int _i, char _a,float _y, int _j)
: i(_i), a(_a), y(_y), j(_j)
{
}

// Read from a buffer
void Dog::deserialize( const char * const buffer ) 
{
	// do your magic here
   UNUSED_VAR(buffer);
}

// Write object to a buffer
void Dog::serialize( char * const buffer ) const
{
	// do your magic here
   UNUSED_VAR(buffer);
}

int	Dog::getI() const
{
	return this->i;
}

char Dog::getA() const
{
	return this->a;
}

float Dog::getY() const
{
	return this->y;
}

int Dog::getJ() const
{
	return this->j;
}

