//3.4 - Simple Inheritance​
//Exercise 2: Creating Shape Base Class
//In this exercise we are going to transform the Point and Line class into a Shape hierarchy 
//Add a source- and header file for a Shape class.
//First create a Shape base class.

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
	~Shape();										//Destructor

	//Add an assignment operator that copies the id member.
	Shape& operator = (const Shape& s);				//Assignment operator

	//Add a ToString() function
	string ToString() const;

	//Add an ID() function
	int ID() const;
};

#endif