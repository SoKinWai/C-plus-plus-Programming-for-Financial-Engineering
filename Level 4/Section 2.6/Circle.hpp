//2.6 - Namespaces​
//Exercise 1: CAD and Container Namespaces​
//To avoid name conflicts, programmers can place their classes in a namespace. 
//For example the standard library is placed in a namespace called std.
//Should put the classes in own namespace.

#ifndef Circle_HPP
#define Circle_HPP
#include "Point.hpp"
#include <iostream>
using namespace std;

namespace Jianwei_Su
{
	namespace CAD
	{
		class Circle
		{
		private:
			Point p_center;
			double m_radius;

		public:
			Circle();													//Default constructor.
			Circle(const Point& center, double radius);					// Constructor with a center point and radius.
			Circle(const Circle& c);									//Copy constructor.

			~Circle();													//Destructor.

			//Getter functions for center and radius.
			Point CentrePoint() const;
			double Radius() const;

			//Setter functions for center and radius.
			void CentrePoint(const Point& new_center);
			void Radius(double new_radius);

			//Getter functions for diameter, area and circumference.
			double Diameter() const;
			double Area() const;
			double Circumference() const;

			string ToString() const;									//Description of the circle.

			// Member operator overloading
			Circle& operator = (const Circle& source);					// Assignment operator
		};

		ostream& operator << (ostream& os, const Circle& c);            // Send to ostream
	}
}
#endif

