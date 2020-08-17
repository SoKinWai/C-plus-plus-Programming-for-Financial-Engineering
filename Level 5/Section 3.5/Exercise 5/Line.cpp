//3.5 - Polymorphism
//Exercise 5: Template Method Pattern
//Create a Print() function that is printing the shape information to the cout object. The Print() function can use the ToString() to obtain the string to print.

#include "Line.hpp"
#include "Point.hpp"
#include <cmath>
#include <sstream>
#include <iostream>
using namespace std;

//The constructors of the Point, Line and the Circle class should call the appropriate constructor in the Shape base class.
Line::Line() :p_start(0, 0), p_end(0, 0), Shape()														//Deafult constructor with colon syntax.
{
}

Line::Line(const Point& p_start, const Point& p_end) : p_start(p_start), p_end(p_end), Shape()			//The constructor that accepts x- and y-coordinates with colon syntax.
{
}

Line::Line(const Line& l) : p_start(l.p_start), p_end(l.p_end), Shape(l)								//Copy constructor with colon syntax.
{
}

Line::~Line()
{
	//cout << "This is the Line destructor." << endl;
}

const Point& Line::P1() const
{
	return p_start;
}

const Point& Line::P2() const
{
	return p_end;
}

void Line::P1(const Point& p_newstart)
{
	p_start = p_newstart;
}

void Line::P2(const Point& p_newend)
{
	p_end = p_newend;
}

//In the ToString() method of Point, call the ToString() method of the Shape base class.
//Append the shape description string to the point description string before returning.
//Do this also for the ToString() function in the Line class (and Circle class).
string Line::ToString() const
{
	stringstream ss;
	std::string s = Shape::ToString();
	ss << "The line of " << "Point(" << p_start.X() << ", " << p_start.Y() << ") " << "to " << "Point(" << p_end.X() << ", " << p_end.Y() << ") " << ", " << s;
	return ss.str();
}

double Line::Length() const
{
	return p_start.Distance(p_end);
}

//The assignment operator should call the assignment operator of the Shape base class. 
//Otherwise the shape data will not be copied.
Line& Line::operator=(const Line& source)				// Assignment operator
{
	if (this == &source)
	{
		return *this;
	}

	//Call the assignment operator of the Shape base class. 
	Shape::operator=(source);
	p_start = source.p_start;
	p_end = source.p_end;

	return *this;
}

ostream& operator << (ostream& os, const Line& l)		// Send to ostream.
{
	os << "The line of " << l.p_start << " to " << l.p_end << endl;

	return os;

}

//Create the Draw() function
void Line::Draw() const
{
	cout << "This is the Draw() function from derived Line." << endl;
}