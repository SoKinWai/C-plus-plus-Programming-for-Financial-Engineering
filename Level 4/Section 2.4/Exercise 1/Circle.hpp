//Use the most comprehensive Point, Line, and Circle classes from Level 3.
//Adding assignment operator to the Circle class​.


#ifndef Circle_HPP
#define Circle_HPP
#include "Point.hpp"
#include <iostream>
using namespace std;

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
#endif
