//2.6 - Namespaces​
//Exercise 1: CAD and Container Namespaces​
//To avoid name conflicts, programmers can place their classes in a namespace. 
//For example the standard library is placed in a namespace called std.
//Should put the classes in own namespace.

#define _USE_MATH_DEFINES
#include <cmath>
#include "Circle.hpp"
#include "Point.hpp"
#include <sstream>
#include <iostream>
using namespace std;

namespace Jianwei_Su
{
	namespace CAD
	{

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

		Circle& Circle::operator=(const Circle& source)											// Assignment operator
		{
			if (this == &source)
			{
				return *this;
			}

			p_center = source.p_center;
			m_radius = source.m_radius;

			return *this;
		}

		ostream& operator << (ostream& os, const Circle& c)						             // Send to ostream
		{
			os << c.ToString() << endl;

			return os;
		}

	}

}
