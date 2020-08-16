//3.4 - Simple Inheritance​
//Exercise 1: Colon Syntax
//The colon syntax can improve the performance of constructors. 
//Apply the colon syntax also for the Point class constructors and if applicable also for the Circle class.

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
	Circle(const Point& center, double radius);					//Constructor with a center point and radius.
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

	// Move the << operator of Point inside the class definition and declare it as friend. 
	friend ostream& operator << (ostream& os, const Circle& c);            // Send to ostream

};


#endif


