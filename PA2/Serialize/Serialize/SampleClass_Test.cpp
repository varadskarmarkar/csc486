//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2017
// Real-Time Networking
//----------------------------------------------------------------------------- 

//SampleClass

//---------------------------------------------------------------------------
// HEADER FILES:
//---------------------------------------------------------------------------
#include "UnitTest.h"
#include "SampleClass.h"


//---------------------------------------------------------------------------
// TESTS:
//---------------------------------------------------------------------------
TEST( SampleClass_test, Serialize_tests )
{
	// initial data
	SampleClass  data(3,5,7);

	// Check the data before the save
	CHECK( data.getX() == 3 );
	CHECK( data.getY() == 5 );
	CHECK( data.getZ() == 7 );

	// create a local buffer
	char buff[ 1024 ];

	// serialize the data
	data.serialize( buff );

	// Create a new
	SampleClass newData;

	// deserialize the data
	newData.deserialize( buff );

	// validate that data is the same
	CHECK( newData.getX() == 3 );
	CHECK( newData.getY() == 5 );
	CHECK( newData.getZ() == 7 );
}


