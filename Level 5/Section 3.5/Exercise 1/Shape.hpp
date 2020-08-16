//3.5 - Polymorphism
//Exercise 1: Polymorphic ToString() Function
//The ToString() functions of Point and Line override the ToString() from the Shape base class. 
//When calling the ToString() method on the Shape* variable, the function in Shape was called instead the one in Point. 
//To make the compiler generate the required code to find out what type of object the Shape* variable is actually pointing to so it can call the right version; we need to declare the function as virtual.

#ifndef Shape_HPP
#define Shape_HPP
#include <iostream>
using namespace std;

class Shape
{
private:
	//Add a data member for an id number of type int.
	int m_id;

public:
	Shape();										//Add a default constructor
	Shape(const Shape& s);							//Add a copy constructor that copies the id member.
	virtual ~Shape();								//Destructor

													//Add an assignment operator that copies the id member.
	Shape& operator = (const Shape& s);				//Assignment operator

	//Add a ToString() function
	virtual string ToString() const;

	//Add an ID() function
	int ID() const;
};

#endif