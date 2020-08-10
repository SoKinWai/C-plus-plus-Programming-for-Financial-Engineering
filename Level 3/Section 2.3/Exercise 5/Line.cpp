//Level 3
//2.3 - Improving your Classes​
//Exercise 5: Line Class​
//Create a Line class.
//The Line class has a start- and an end-point.
//The Line class should have two Point objects as data members. 
//Use const arguments, const functions and pass objects by reference where applicable.

#include "Line.hpp"
#include "Point.hpp"
#include <cmath>
#include <sstream>
#include <iostream>
using namespace std;

Line::Line():p_start(0,0),p_end(0,0)
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

void Line::P1(const Point& p_newstart)
{
	p_start = p_newstart;
}

void Line::P2(const Point& p_newend)
{
	p_end = p_newend;
}

const Point& Line::P1() const
{
	return p_start;
}

const Point& Line::P2() const
{
	return p_end;
}

string Line::ToString() const
{
	stringstream ss;
	ss<< "The line of " <<p_start.ToString() << " to " << p_end.ToString();
	return ss.str();
}

double Line::Length() const
{
	return p_start.Distance(p_end);
}