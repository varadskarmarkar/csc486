//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2017
// Real-Time Networking
//----------------------------------------------------------------------------- 

#include <string.h>
#include "SampleClass.h"

SampleClass::SampleClass(int in_x, int in_y, int in_z)
: x(in_x), y(in_y), z(in_z)
{
};

SampleClass::SampleClass()
: x(0),y(0),z(0)
{
};

int SampleClass::getX( void )
{
	return this->x;
}

int SampleClass::getY( void )
{
	return this->y;
}

int SampleClass::getZ( void )
{
	return this->z;
}

// Read from a buffer
void SampleClass::deserialize( char *buffer )
{
	memcpy( this, buffer, sizeof(SampleClass) );
};

// Write object to a buffer
void SampleClass::serialize( char *buffer )
{
	memcpy( buffer, this, sizeof(SampleClass) );
};

