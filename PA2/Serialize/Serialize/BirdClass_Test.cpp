//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2017
// Real-Time Networking
//----------------------------------------------------------------------------- 

//---------------------------------------------------------------------------
// HEADER FILES:
//---------------------------------------------------------------------------
#include <string.h>
#include "UnitTest.h"
#include "Bird.h"

//---------------------------------------------------------------------------
// TESTS:
//---------------------------------------------------------------------------
TEST( BirdClass, Serialize_tests )
{
	// this string is only there for testing purposes
	const char *refText = "This is a test to have a very long string to Serialize";

	// initial data
	Bird  data(0x5FB5A98A, 0x7765);

	// Check the data before the save
	CHECK( data.getX() == 0x5FB5A98A );
	CHECK( data.getY() == 0x7765 );
	CHECK( strcmp( data.getS(), refText ) == 0 );

	// create a local buffer
	char buff[ 1024 ];

	// serialize the data
	data.serialize( buff );

	// Create a new
	Bird newData;

	// deserialize the data
	newData.deserialize( buff );

	// validate that data is the same
	CHECK( newData.getX() == 0x5FB5A98A );
	CHECK( newData.getY() == 0x7765 );
	CHECK( strcmp( newData.getS(), refText ) == 0 );

	// check the size of the data structure
	CHECK( sizeof(Bird) == 12 );
}
