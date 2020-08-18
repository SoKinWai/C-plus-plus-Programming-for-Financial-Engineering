//3.6 - Exception Handling
//​Exercise 2: Exception Objects
//Create an exception hierarchy with an ArrayException base class and an OutOfBoundsException derived class

#ifndef Point_HPP
#define Point_HPP
#include "Shape.hpp"
#include <iostream>
using namespace std;

class Point :public Shape
{
private:
	//x- and y-coordinates 
	double m_x;
	double m_y;

public:
	Point();								//Default constructor.
	Point(const Point& p);					//Copy constructor.
	Point(double xval, double yval);		//The constructor that accepts x- and y-coordinates.
	explicit Point(double value);			//declare the constructor as explicit

	virtual ~Point();						//Destructor

	//To access functions
	//Getter functions for x- and y-coordinates.
	double X() const;
	double Y() const;

	//Modifiers
	//Setter functions for x- and y-coordinates.
	void X(double new_x);
	void Y(double new_y);

	virtual string ToString() const;						//To string description of the point.

	//The distance between the origin and the point 1.
	double Distance() const;

	//To calculate the distance between two points.
	//Pass the Distance()  function as “const reference”
	double Distance(const Point& p) const;


	//Member Operator Overloading
	Point operator - () const;						// Negate the coordinates.
	Point operator * (double factor) const;			// Scale the coordinates.
	Point operator + (const Point& p) const;		// Add coordinates.
	bool operator == (const Point& p) const;		// Equally compare operator.
	Point& operator = (const Point& source);		// Assignment operator.
	Point& operator *= (double factor);				// Scale the coordinates & assign.


	// Move the << operator of Point inside the class definition and declare it as friend. 
	friend ostream& operator << (ostream& os, const Point& p);  // Send to ostream.

	//Create the Draw() function
	virtual void Draw() const;

};



#endif




