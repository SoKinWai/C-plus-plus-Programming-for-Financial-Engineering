//4.2a - Introduction to Templates​
//Exercise 1: Templated Array Class

#include<string>
#include<iostream>
#include<stdlib.h>
#include <sstream>
#include <cmath>
#include "OutOfBoundsException.hpp"
using namespace std;

//A default constructor.
OutOfBoundsException::OutOfBoundsException() :ArrayException()
{
}

//The constructor that accepts erroneus index.
OutOfBoundsException::OutOfBoundsException(int index) : m_index(index), ArrayException()
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