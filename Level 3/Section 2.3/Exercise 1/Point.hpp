//Level 3
//2.3 - Improving your Classes​
//Exercise 1: Extra Constructors​
//Add a copy constructor to the Point class that also displays some text. 
//Also add a constructor that accepts x- and y-coordinates.

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
    
	//Destructor
	~Point();

	//Modifiers
	//Setter functions for x- and y-coordinates.
	void SetX(double new_x);
	void SetY(double new_y);

	//Selectors 
	//To access functions
	//Getter functions for x- and y-coordinates.
	double GetX();
	double GetY();		

	string ToString();						//To string description of the point.

	//To calculate the distance between two points.
	double Distance(Point p);
};

#endif