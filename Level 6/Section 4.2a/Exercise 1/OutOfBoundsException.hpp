//4.2a - Introduction to Templates​
//Exercise 1: Templated Array Class

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