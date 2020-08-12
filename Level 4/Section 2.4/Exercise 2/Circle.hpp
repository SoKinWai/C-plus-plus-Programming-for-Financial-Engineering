//Ostream << Operator
//Send a point or a line directly to the cout object without calling the ToString() method, just as with the primitive types. 
//Adding a << operator function that has on the left an std::ostream and on the right the point or line object.
//Since you can¡¯t add a member function to the std::ostream class, you have to create it as a global function (outside the class definition, but inside the class header file):
//ostream& operator << (ostream& os, const Point& p); // Send to ostream.
//The implementation uses the << operator to send data to the os input argument. Since it is a global function, you can¡¯t access the private members of Point.
//Also create a similar << operator for printing lines (and circles if you made a circle class). Adapt the test program to test the << operator for points and lines.


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

ostream& operator << (ostream& os, const Circle& c);            // Send to ostream

#endif

