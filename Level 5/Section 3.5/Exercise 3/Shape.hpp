//3.5 - Polymorphism​
//Exercise 3: Virtual Destructors
//Print some text in the destructors of the Shape, Point and Line classes.

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

