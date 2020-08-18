//3.6 - Exception Handling
//​Exercise 2: Exception Objects
//Create an exception hierarchy with an ArrayException base class and an OutOfBoundsException derived class
//Give the ArrayException an abstract GetMessage() function that returns a std::string.

#ifndef ArrayException_HPP
#define ArrayException_HPP
#include <iostream>
#include <sstream>
using namespace std;

class ArrayException
{
private:
public:
	ArrayException();															//A default constructor.
	
	virtual	~ArrayException();													//A destructor. 
	
	//Give the ArrayException an abstract GetMessage() function that returns a std::string.
	virtual string GetMessage() = 0;
};

#endif
