//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2017
// Real-Time Networking
//----------------------------------------------------------------------------- 

#include <assert.h>

#include "WinSockWrapper.h"
#pragma comment(lib,"ws2_32.lib")
			
#include "Trace.h"



int main()
{
	//----------------------------------------------------
	// Add your magic here
	//----------------------------------------------------



	//----------------------------------------------------
	// print and exit
	//----------------------------------------------------
	
	Trace::out("\n"); 
	Trace::out("Server: Done\n");
	Trace::out("\n");

	// Uncomment for development
	// system("PAUSE");
	return 0;
}