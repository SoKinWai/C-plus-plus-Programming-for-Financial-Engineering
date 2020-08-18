//3.6 - Exception Handling
//​Exercise 2: Exception Objects
//Create an exception hierarchy with an ArrayException base class and an OutOfBoundsException derived class
//Give the OutOfBoundsException class a constructor with an int as argument that indicates the erroneous array index and store it in a data member.
//Override the GetMessage() function and let the implementation return a message string saying the given index is out of bounds.

#include<string>
#include<iostream>
#include<stdlib.h>
#include <sstream>
#include <cmath>
#include "OutOfBoundsException.hpp"
using namespace std;

//A default constructor.
OutOfBoundsException::OutOfBoundsException():ArrayException()
{
}

//The constructor that accepts erroneus index.
OutOfBoundsException::OutOfBoundsException(int index):m_index(index), ArrayException()
{
}

//Destructor
OutOfBoundsException::~OutOfBoundsException()
{

}

//Override the GetMessage() function and let the implementation return a message string saying the given index is out of bounds.
string OutOfBoundsException::GetMessage()
{
	stringstream ss;
	ss << "The index " << m_index << " is out of bounds." << endl;
	return ss.str();
}