//Create a Circle class.
//It has a center point and radius. 
//Create the proper constructors, destructor, selector and modifier functions.
//Also add functions for getting the diameter, area and circumference.
//Don¡¯t forget a ToString() function.
//All optimizations requested for Line should also be implemented for Circle.

#define _USE_MATH_DEFINES
#include <cmath>
#include "Circle.hpp"
#include "Point.hpp"
#include <sstream>
#include <iostream>
using namespace std;

Circle::Circle()
{
	m_radius = 0.5;
}

Circle::Circle(const Point& center, double radius) : p_center(center), m_radius(radius)
{
}

Circle::Circle(const Circle& c) : p_center(c.p_center), m_radius(c.m_radius)
{
}

Circle::~Circle()
{
}

void Circle::CentrePoint(const Point& new_center)
{
	p_center = new_center;
}

void Circle::Radius(double new_radius)
{
	m_radius = new_radius;
}

Point Circle::CentrePoint() const
{
	return p_center;
}

double Circle::Radius() const
{
	return m_radius;
}

double Circle::Diameter() const
{
	return 2.0 * m_radius;
}

double Circle::Area() const
{
	return M_PI * pow(m_radius, 2);
}

double Circle::Circumference() const
{
	return 2.0 * M_PI * m_radius;
}

string Circle::ToString() const
{
	stringstream ss;

	ss << "Center is: " << p_center.ToString() << endl << "Radius is: " << m_radius;

	return ss.str();
}