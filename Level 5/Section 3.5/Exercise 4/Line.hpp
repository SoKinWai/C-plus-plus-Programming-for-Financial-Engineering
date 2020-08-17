//3.5 - Polymorphism​
//Exercise 4: Abstract Functions
//Create the Draw() function in the Shape base class and override it in the derived classes (point, line and if present the circle class). Simulate drawing by just printing some text.
//Give the Draw() function in Shape

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

	virtual ~Line();														//Destructor.

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

	//Create the Draw() function
	virtual void Draw() const;
};



#endif





