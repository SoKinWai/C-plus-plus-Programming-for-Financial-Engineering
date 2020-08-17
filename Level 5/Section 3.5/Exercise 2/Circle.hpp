//3.5 - Polymorphism​
//Exercise 2: Calling Base Class Functionality
//In the ToString() function of Point and Line we also want to incorporate the ID from the Shape base class.

#ifndef Circle_HPP
#define Circle_HPP
#include "Shape.hpp"
#include "Point.hpp"
#include <iostream>
using namespace std;

class Circle :public Shape
{
private:
	Point p_center;
	double m_radius;

public:
	Circle();															//Default constructor.
	Circle(const Point& center, double radius);							//Constructor with a center point and radius.
	Circle(const Circle& c);											//Copy constructor.

	virtual ~Circle();													//Destructor.

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

	virtual string ToString() const;												//Description of the circle.

	// Member operator overloading
	Circle& operator = (const Circle& source);								// Assignment operator

	// Move the << operator of Point inside the class definition and declare it as friend. 
	friend ostream& operator << (ostream& os, const Circle& c);            // Send to ostream

};


#endif


