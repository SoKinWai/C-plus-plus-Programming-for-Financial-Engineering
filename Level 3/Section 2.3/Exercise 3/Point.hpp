//Level 3
//2.3 - Improving your Classes​
//Exercise 3: Function Overloading​
//Function Overloading​.
//Rename the DistanceOrigin() function to Distance().
//Rename the SetX() and GetX() functions to just X(). 
//The same is true for the setter and getter of the y-coordinate.

#ifndef Point_HPP
#define Point_HPP
#include <iostream>
using namespace std;

class Point
{
private:
	//x- and y-coordinates 
	double m_x;
	double m_y;

public:
	Point();								//Default constructor.
	Point(const Point& p);					//Copy constructor.
	Point(double xval, double yval);		//The constructor that accepts x- and y-coordinates.


	~Point();							    //Destructor
	
	//Modifiers
	//Setter functions for x- and y-coordinates.
	void X(double new_x);
	void Y(double new_y);

	//Selectors
	//To access functions
	//Getter functions for x- and y-coordinates.
	double X();
	double Y();

	string ToString();						//To string description of the point.

	//The distance between the origin and the point 1.
	double Distance();
	
	//To calculate the distance between two points.
	//Pass the Distance()  function as “const reference”
	double Distance(const Point& p);
};

#endif
