//4.2a - Introduction to Templates​
//Exercise 1: Templated Array Class

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
