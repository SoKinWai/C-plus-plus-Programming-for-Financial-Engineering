//3.6 - Exception Handling
//​Exercise 2: Exception Objects
//Create an exception hierarchy with an ArrayException base class and an OutOfBoundsException derived class
//Give the OutOfBoundsException class a constructor with an int as argument that indicates the erroneous array index and store it in a data member.
//Override the GetMessage() function and let the implementation return a message string saying the given index is out of bounds.

#ifndef OutOfBoundsException_HPP
#define OutOfBoundsException_HPP
#include <sstream>
#include <iostream>
#include "ArrayException.hpp"
using namespace std;

class OutOfBoundsException : public ArrayException
{
private:
	int m_index;

public:
	OutOfBoundsException();											//A default constructor.
	OutOfBoundsException(int index);								//The constructor that accepts erroneus index.
	virtual ~OutOfBoundsException();								//Destructor

	//Override the GetMessage() function.
	string GetMessage();

};

#endif