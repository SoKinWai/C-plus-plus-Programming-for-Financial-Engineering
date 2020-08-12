//Friends
//Move the << operator of Point and Line inside the class definition and declare it as friend.
//The function remains a global function but it can now access the data members directly without the need for calling the getters or ToString() function.


#include "Point.hpp"
#include <cmath>
#include <sstream>
#include <iostream>
using namespace std;

Point::Point()														//Default constructor
{
}

Point::Point(const Point& p) :m_x(p.m_x), m_y(p.m_y)				//Copy constructor
{
}

Point::Point(double xval, double yval) : m_x(xval), m_y(yval)		//The constructor that accepts x- and y-coordinates.
{
}

Point::Point(double value) : m_x(value), m_y(value)
{
}

Point::~Point()														//Destructor.
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

Point& Point::operator = (const Point& source)							// Assignment operator.
{
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