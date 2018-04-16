//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2017
// Real-Time Networking
//----------------------------------------------------------------------------- 

#ifndef MEM_TRACKER_H
#define MEM_TRACKER_H

// Comment out this line to turn off memory tracking
// I will be grading with this setting on
#define MEM_TRACKER_ENABLED

#if defined(_DEBUG) && defined(MEM_TRACKER_ENABLED)
#define _CRTDBG_MAP_ALLOC  
#include <stdlib.h>  
#include <crtdbg.h>  
#define new new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
#endif


#include "Trace.h"

#ifdef MEM_TRACKER_ENABLED

	#ifdef _DEBUG
	#define MEM_TRACKER_END		    int _leakCount = _CrtDumpMemoryLeaks(); \
									Trace::out("\n"); \
									Trace::out("--------------------------------\n"); \
									if (_leakCount) { \
									Trace::out(">>> Memory Tracking: fail <<<<<<\n"); }\
									else \
									Trace::out("    Memory Tracking: passed \n"); \
									Trace::out("--------------------------------\n"); \
									Trace::out("    Memory Tracking: end()      \n"); \
									Trace::out("--------------------------------\n");

		#define MEM_TRACKER_START   Trace::out("--------------------------------\n"); \
									Trace::out("    Memory Tracking: start()    \n"); \
									Trace::out("--------------------------------\n");
	#else
		#define MEM_TRACKER_START 
		#define MEM_TRACKER_END 
	#endif

#else
	#define MEM_TRACKER_START
	#define MEM_TRACKER_END
#endif


#endif
