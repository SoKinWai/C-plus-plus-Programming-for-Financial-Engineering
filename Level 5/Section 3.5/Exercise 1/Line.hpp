//3.5 - Polymorphism
//Exercise 1: Polymorphic ToString() Function
//The ToString() functions of Point and Line override the ToString() from the Shape base class. 
//When calling the ToString() method on the Shape* variable, the function in Shape was called instead the one in Point. 
//To make the compiler generate the required code to find out what type of object the Shape* variable is actually pointing to so it can call the right version; we need to declare the function as virtual.

#ifndef Line_HPP
#define Line_HPP
#include "Shape.hpp"
#include "Point.hpp"
#include <iostream>
using namespace std;

class Line :public Shape
{
private:
	Point p_start;															//The start point.
	Point p_end;															//The end point.

public:
	Line();																	//Default constructor.
	Line(const Point& p_start, const Point& p_end);							//Constructor with a start- and end-point.
	Line(const Line& l);													//Copy constructor.

	virtual ~Line();																//Destructor.

	//Selectors															
	//To access functions.
	//Overloaded getters for the start- and end-point.
	const Point& P1() const;
	const Point& P2() const;

	//Modifiers
	//Overloaded setters for the start- and end-point.
	void P1(const Point& p_newstart);
	void P2(const Point& p_newend);

	//A ToString() function that returns a description of the line.
	virtual string ToString() const;

	//A Length() function that returns the length of the line. 
	double Length() const;

	//Member Operator Overloading
	Line& operator = (const Line& source);										// Assignment operator

	// Move the << operator of Line inside the class definition and declare it as friend. 
	friend ostream& operator << (ostream& os, const Line& l);					// Send to ostream.
};



#endif


