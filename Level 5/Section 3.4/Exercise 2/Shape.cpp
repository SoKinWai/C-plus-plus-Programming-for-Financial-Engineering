//3.4 - Simple Inheritance​
//Exercise 2: Creating Shape Base Class
//In this exercise we are going to transform the Point and Line class into a Shape hierarchy 
//First create a Shape base class.
//Add a source- and header file for a Shape class.
//You can use the rand() function from the “stdlib.h” header file.

#include <stdlib.h>
#include "Shape.hpp"
#include <sstream>
using namespace std;


//Add a default constructor that initializes the id using a random number.
//You can use the rand() function from the “stdlib.h” header file.
Shape::Shape() :m_id(rand())
{
}

//Add a copy constructor that copies the id member.
Shape::Shape(const Shape& s) : m_id(s.m_id)
{
}

//Destructor
Shape::~Shape()	
{
}

//Add an assignment operator that copies the id member.
Shape& Shape::operator=(const Shape& s)
{
	if (this == &s)
	{
		return *this;
	}

	m_id = s.m_id;
	return *this;
}

//Add a ToString() function that returns the id as string e.g. “ID: 123”.
string Shape::ToString() const
{
	stringstream ss;
	ss << "The ID is:" << m_id;
	return ss.str();
}

//Add an ID() function the retrieve the id of the shape.
int Shape::ID() const
{
	return m_id;
}