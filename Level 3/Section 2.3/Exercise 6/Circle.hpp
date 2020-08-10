//Create a Circle class.
//It has a center point and radius. 
//Create the proper constructors, destructor, selector and modifier functions.
//Also add functions for getting the diameter, area and circumference.
//Don¡¯t forget a ToString() function.
//All optimizations requested for Line should also be implemented for Circle.

#ifndef Circle_HPP
#define Circle_HPP
#include "Point.hpp"
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
	
	//Setter functions for center and radius.
	void CentrePoint(const Point& new_center);
	void Radius(double new_radius);
	
	//Getter functions for center and radius.
	Point CentrePoint() const;
	double Radius() const;

	//Getter functions for diameter, area and circumference.
	double Diameter() const;
	double Area() const;
	double Circumference() const;

	string ToString() const;									//Description of the circle.
};
#endif