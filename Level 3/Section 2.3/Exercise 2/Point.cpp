//Level 3
//2.3 - Improving your Classes​
//Exercise 2: Pass by Reference​
//Pass by Reference​ in the Distance()  function.
//Change the Distance()  function so that it passes the input point “by reference” so that no copy is made. 
//Pass it as “const reference” to make it impossible to change the input point from within the Distance() function

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

void Point::SetX(double new_x)
{
	m_x = new_x;
}

void Point::SetY(double new_y)
{
	m_y = new_y;
}

double Point::GetX()
{
	return m_x;
}

double Point::GetY()
{
	return m_y;
}

string Point::ToString()
{
	stringstream ss;
	ss << "Point(" << m_x << "," << m_y << ")";
	return ss.str();
}


double Point::Distance(const Point& p)
{
	//Change the input point in the Distance() function. 
	//p.SetX(1);
	//p.SetY(1);
	//This should result in a compiler error.
	return sqrt(pow(m_x - p.m_x, 2) + pow(m_y - p.m_y, 2));
}
