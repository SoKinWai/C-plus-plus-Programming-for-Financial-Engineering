//3.5 - Polymorphism​
//Exercise 2: Calling Base Class Functionality
//In the ToString() function of Point and Line we also want to incorporate the ID from the Shape base class.

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