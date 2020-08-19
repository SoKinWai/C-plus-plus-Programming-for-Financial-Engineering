//4.2a - Introduction to Templates​
//Exercise 1: Templated Array Class

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

	//Give the Draw() function in Shape
	virtual void Draw() const = 0;

	//Create a Print() function
	void Print() const;
};

#endif


