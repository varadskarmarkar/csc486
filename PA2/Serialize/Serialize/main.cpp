//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2017
// Real-Time Networking
//----------------------------------------------------------------------------- 

//---------------------------------------------------------------------------
// HEADER FILES:
//---------------------------------------------------------------------------

#include "UnitTest.h"

//---------------------------------------------------------------------------
// MAIN METHOD:
//---------------------------------------------------------------------------
int main()
{
MEM_TRACKER_START

	TestRegistry::RunTests();
	
MEM_TRACKER_END
}

