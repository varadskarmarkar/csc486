//-----------------------------------------------------------------------------
// Copyright Ed Keenan 2017
// Real-Time Networking
//----------------------------------------------------------------------------- 

#ifndef DOG_H
#define DOG_H

class Dog
{
public:
	// big four
	Dog(int _i, char _a, float _y, int _j);
	Dog() = default;
	Dog & operator = (const Dog &) = default;
	~Dog() = default;

	// Read from a buffer
	void deserialize( const char * const buffer );

	// Write object to a buffer
	void serialize( char * const buffer ) const;

	// accessors
	int		getI() const;
	char	getA() const;
	float	getY() const;
	int		getJ() const;

private:
	// data to serialize
	float	y;
	int		i;
	int		j;
	char	a;
	
	

};



#endif