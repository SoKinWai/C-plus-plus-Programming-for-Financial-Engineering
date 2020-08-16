//3.5 - Polymorphism
//Exercise 1: Polymorphic ToString() Function
//The ToString() functions of Point and Line override the ToString() from the Shape base class. 
//When calling the ToString() method on the Shape* variable, the function in Shape was called instead the one in Point. 
//To make the compiler generate the required code to find out what type of object the Shape* variable is actually pointing to so it can call the right version; we need to declare the function as virtual.

#include <stdlib.h>
#include "Shape.hpp"
#include <sstream>
using namespace std;

//Add a default constructor that initializes the id using a random number.
//You can use the rand() function from the ¡°stdlib.h¡± header file.
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

//Add a ToString() function that returns the id as string e.g. ¡°ID: 123¡±.
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