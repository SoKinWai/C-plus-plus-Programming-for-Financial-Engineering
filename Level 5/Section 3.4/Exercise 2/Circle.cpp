﻿//3.4 - Simple Inheritance​
//Exercise 2: Creating Shape Base Class
//In this exercise we are going to transform the Point and Line class into a Shape hierarchy 
//The Point and Line classes (and the Circle class if applicable) must derive from Shape.
//Add the Shape class in the inheritance list of the Point, Line and the Circle class.
//The constructors of the Point, Line and the Circle class should call the appropriate constructor in the Shape base class.

#define _USE_MATH_DEFINES
#include <cmath>
#include "Circle.hpp"
#include "Point.hpp"
#include <sstream>
#include <iostream>
using namespace std;

//The constructors of the Point, Line and the Circle class should call the appropriate constructor in the Shape base class.
Circle::Circle() :p_center(0.0, 0.0), m_radius(0.5),Shape()
{
}


Circle::Circle(const Point& center, double radius) : p_center(center), m_radius(radius),Shape()
{
}


Circle::Circle(const Circle& c) : p_center(c.p_center), m_radius(c.m_radius),Shape(c)
{
}

Circle::~Circle()
{
}

Point Circle::CentrePoint() const
{
	return p_center;
}

double Circle::Radius() const
{
	return m_radius;
}

void Circle::CentrePoint(const Point& new_center)
{
	p_center = new_center;
}

void Circle::Radius(double new_radius)
{
	m_radius = new_radius;
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

//The assignment operator should call the assignment operator of the Shape base class. 
//Otherwise the shape data will not be copied.
Circle& Circle::operator=(const Circle& source)											// Assignment operator
{
	if (this == &source)
	{
		return *this;
	}

	//Call the assignment operator of the Shape base class. 
	Shape::operator=(source);

	p_center = source.p_center;
	m_radius = source.m_radius;

	return *this;
}

ostream& operator << (ostream& os, const Circle& c)						              // Send to ostream
{
	os << c.ToString() << endl;

	return os;
}
