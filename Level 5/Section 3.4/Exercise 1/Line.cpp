//3.4 - Simple Inheritance​
//Exercise 1: Colon Syntax
//The colon syntax can improve the performance of constructors. 
//Execute the following code in the test program and count the number of point constructor, destructor and assignment calls: Line l;
//Change the constructors in the Line class to use the colon syntax to set the start- and end-point data members and run the test program again. 
//Is the number of point constructor, destructor and assignment calls less than before?

#include "Line.hpp"
#include "Point.hpp"
#include <cmath>
#include <sstream>
#include <iostream>
using namespace std;

//Default constructor without colon syntax
//Line::Line()
//{
//	p_start = Point(0, 0);
//	p_end = Point(0, 0);
//}

//The constructor that accepts x- and y-coordinates without colon syntax.
//Line::Line(const Point& p_s, const Point& p_e)
//{
//	p_start = p_s;
//	p_end = p_e;
//}

//Copy constructor without colon syntax.
//Line::Line(const Line& l)
//{
//	p_start = l.p_start;
//	p_end = l.p_end;
//}

Line::Line() :p_start(0, 0), p_end(0, 0)														//Deafult constructor with colon syntax.
{
}

Line::Line(const Point& p_start, const Point& p_end) : p_start(p_start), p_end(p_end)			//The constructor that accepts x- and y-coordinates with colon syntax.
{
}

Line::Line(const Line& l) : p_start(l.p_start), p_end(l.p_end)									//Copy constructor with colon syntax.
{
}

Line::~Line()
{
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

string Line::ToString() const
{
	stringstream ss;
	ss << "The line of " << p_start.ToString() << " to " << p_end.ToString();
	return ss.str();
}

double Line::Length() const
{
	return p_start.Distance(p_end);
}

Line& Line::operator=(const Line& source)				// Assignment operator
{
	if (this == &source)
	{
		return *this;
	}

	p_start = source.p_start;
	p_end = source.p_end;

	return *this;
}

ostream& operator << (ostream& os, const Line& l)		// Send to ostream.
{
	os << "The line of " << l.p_start << " to " << l.p_end << endl;

	return os;

}