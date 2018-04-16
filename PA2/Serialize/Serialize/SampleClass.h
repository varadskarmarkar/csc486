//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2017
// Real-Time Networking
//----------------------------------------------------------------------------- 

#ifndef SAMPLECLASS_H
#define SAMPLECLASS_H

class SampleClass
{
public:
	// default constructor
	SampleClass();	
	
	// specialize constructor
	SampleClass(int in_x, int in_y, int in_z);

	SampleClass(const SampleClass &) = default;
	SampleClass & operator =(const SampleClass &) = default;
	~SampleClass() = default;

	// Read from a buffer
	void deserialize( char *buffer );

	// Write object to a buffer
	void serialize( char *buffer );

	// get functions
	int getX( void );
	int getY( void );
	int getZ( void );

private:
	int x;
	int y;
	int z;

};

#endif