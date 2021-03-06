//3.5 - Polymorphism
//Exercise 1: Polymorphic ToString() Function
//The ToString() functions of Point and Line override the ToString() from the Shape base class. 
//When calling the ToString() method on the Shape* variable, the function in Shape was called instead the one in Point. 
//To make the compiler generate the required code to find out what type of object the Shape* variable is actually pointing to so it can call the right version; we need to declare the function as virtual.

#include "Point.hpp"
#include <cmath>
#include <sstream>
#include <iostream>
using namespace std;

//The constructors of the Point, Line and the Circle class should call the appropriate constructor in the Shape base class.
Point::Point() :m_x(0), m_y(0), Shape()												//Default constructor
{
}

Point::Point(const Point& p) : m_x(p.m_x), m_y(p.m_y), Shape(p)						//Copy constructor
{
}

Point::Point(double xval, double yval) : m_x(xval), m_y(yval), Shape()				//The constructor that accepts x- and y-coordinates.
{
}

Point::Point(double value) : m_x(value), m_y(value), Shape()
{
}

Point::~Point()																		//Destructor.
{
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

//The assignment operator should call the assignment operator of the Shape base class. 
//Otherwise the shape data will not be copied.
Point& Point::operator = (const Point& source)							// Assignment operator.
{
	if (this == &source)
	{
		return *this;
	}

	//Call the assignment operator of the Shape base class. 
	Shape::operator=(source);

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