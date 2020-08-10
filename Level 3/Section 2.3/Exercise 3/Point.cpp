//Level 3
//2.3 - Improving your Classes​
//Exercise 3: Function Overloading​
//Function Overloading​.
//Rename the DistanceOrigin() function to Distance().
//Rename the SetX() and GetX() functions to just X(). 
//The same is true for the setter and getter of the y-coordinate.

#include "Point.hpp"
#include <cmath>
#include <sstream>
#include <iostream>
using namespace std;

Point::Point()														//Default constructor
{
	cout << "This is the default constructor." << endl;
}

Point::Point(const Point& p) :m_x(p.m_x), m_y(p.m_y)				//Copy constructor
{
	cout << "This is the copy constructor." << endl;
}

Point::Point(double xval, double yval) : m_x(xval), m_y(yval)		//The constructor that accepts x- and y-coordinates.
{
	cout << "This is the constructor that accepts x- and y-coordinates." << endl;
}

Point::~Point()														//Destructor.
{
	cout << "This is the destructor." << endl;
}

void Point::X(double new_x)
{
	m_x = new_x;
}

void Point::Y(double new_y)
{
	m_y = new_y;
}

double Point::X()
{
	return m_x;
}

double Point::Y()
{
	return m_y;
}

string Point::ToString()
{
	stringstream ss;
	ss << "Point(" << m_x << "," << m_y << ")";
	return ss.str();
}

double Point::Distance()
{
	return sqrt(pow(m_x, 2) + pow(m_y, 2));
}


double Point::Distance(const Point& p)
{
	return sqrt(pow(m_x - p.m_x, 2) + pow(m_y - p.m_y, 2));
}