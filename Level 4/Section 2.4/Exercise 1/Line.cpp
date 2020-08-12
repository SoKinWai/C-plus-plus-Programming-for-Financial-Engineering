//Use the most comprehensive Point, Line, and Circle classes from Level 3.
//Adding assignment operator to the Line class​.


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
	// Avoid doing assign to myself
	if (this == &source)
	{
		return *this;
	}

	p_start = source.p_start;
	p_end = source.p_end;

	return *this;
}