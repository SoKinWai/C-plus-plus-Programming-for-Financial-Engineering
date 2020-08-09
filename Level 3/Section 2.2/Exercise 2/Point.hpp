//Level 2
//2.2 - The Class Concept​
//Exercise 2: Distance Functions​
//A header file for the Point class with private members for the x- and y- coordinates.
//Point.hpp
//Add the #ifndef/#define/#endif statements to avoid multiple inclusion.
//Add distance functions to the Point class. 


#ifndef Point_HPP
#define Point_HPP

#include<iostream>
#include<string>
using namespace std;

class Point
{
private:
	double m_x;		//x-coordinates
	double m_y;		//y-coordinates

public:
	Point();		//Default constructor
	~Point();		//Destructor
	
	//Modifiers
	//Setter functions for the x- and y- coordinates(SetX() and SetY() functions).
	void SetX(double newxval);		//Set the x value
	void SetY(double newyval);		//Set the y value
	
	//Selectors
	//Getter functions for the x- and y- coordinates(Get() and GetY() functions).
	double GetX();
	double GetY();

	string ToString();				//A String description of the point.

	double DistanceOrigin();		// Calculate the distance to the origin (0, 0).
	double Distance(Point p);		// Calculate the distance between two points.
};

#endif
