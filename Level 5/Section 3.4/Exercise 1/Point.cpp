﻿//3.4 - Simple Inheritance​
//Exercise 1: Colon Syntax
//The colon syntax can improve the performance of constructors. 
//To test this, make sure that you print some text in the point’s constructors, destructor and also the assignment operator.

#include "Point.hpp"
#include <cmath>
#include <sstream>
#include <iostream>
using namespace std;

Point::Point() :m_x(0), m_y(0)										//Default constructor
{
	cout << "This is the default constructor." << endl;
}

Point::Point(const Point& p) : m_x(p.m_x), m_y(p.m_y)				//Copy constructor
{
	cout << "This is the copy constructor." << endl;
}

Point::Point(double xval, double yval) : m_x(xval), m_y(yval)		//The constructor that accepts x- and y-coordinates.
{
	cout << "This is the constructor that accepts x- and y-coordinates." << endl;
}

Point::Point(double value) : m_x(value), m_y(value)
{
}

Point::~Point()														//Destructor.
{
	cout << "This is the destructor" << endl;
}

double Point::X() const
{
	return m_x;
}

double Point::Y() const
{
	return m_y;
}

void Point::X(double new_x)
{
	m_x = new_x;
}

void Point::Y(double new_y)
{
	m_y = new_y;
}

string Point::ToString() const
{
	stringstream ss;
	ss << "Point(" << m_x << "," << m_y << ")";
	return ss.str();
}

double Point::Distance() const
{
	return sqrt(pow(m_x, 2) + pow(m_y, 2));
}


double Point::Distance(const Point& p) const
{
	return sqrt(pow(m_x - p.m_x, 2) + pow(m_y - p.m_y, 2));
}

Point Point::operator - () const										// Negate the coordinates.
{
	return Point(-m_x, -m_y);
}

Point Point::operator * (double factor) const
{
	return Point(m_x*factor, m_y*factor);								// Scale the coordinates.
}

Point Point::operator + (const Point& p) const
{
	return Point(m_x + p.m_x, m_y + p.m_y);								// Add coordinates.
}

bool Point::operator == (const Point& p) const							// Equally compare operator.
{
	return bool(m_x == p.m_x && m_y == p.m_y);

}

Point& Point::operator = (const Point& source)							// Assignment operator.
{
	cout << "This is the assignment operator." << endl;
	if (this == &source)
	{
		return *this;
	}

	m_x = source.m_x;
	m_y = source.m_y;

	return *this;
}

Point& Point::operator *=(double factor)								// Scale the coordinates & assign.
{
	m_x *= factor;
	m_y *= factor;

	return *this;
}

ostream& operator << (ostream& os, const Point& p)						// Send to ostream.
{
	os << "Point(" << p.m_x << "," << p.m_y << ")";
	return os;
}