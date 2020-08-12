//Ostream << Operator
//Send a point or a line directly to the cout object without calling the ToString() method, just as with the primitive types. 
//Adding a << operator function that has on the left an std::ostream and on the right the point or line object.
//Since you can¡¯t add a member function to the std::ostream class, you have to create it as a global function (outside the class definition, but inside the class header file):
//ostream& operator << (ostream& os, const Point& p); // Send to ostream.
//The implementation uses the << operator to send data to the os input argument. Since it is a global function, you can¡¯t access the private members of Point.
//Also create a similar << operator for printing lines (and circles if you made a circle class). Adapt the test program to test the << operator for points and lines.

#include "Line.hpp"
#include "Point.hpp"
#include <cmath>
#include <sstream>
#include <iostream>
using namespace std;


Line::Line() :p_start(0, 0), p_end(0, 0)
{
}

Line::Line(const Point& p_start, const Point& p_end) : p_start(p_start), p_end(p_end)
{
}

Line::Line(const Line& l) : p_start(l.p_start), p_end(l.p_end)
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
	os << l.ToString() << endl;

	return os;

}