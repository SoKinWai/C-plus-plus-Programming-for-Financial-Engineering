//3.5 - Polymorphism​
//Exercise 4: Abstract Functions
//Create the Draw() function in the Shape base class and override it in the derived classes (point, line and if present the circle class). Simulate drawing by just printing some text.
//Give the Draw() function in Shape

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

	//Create the Draw() function
	virtual void Draw() const;
};


#endif



