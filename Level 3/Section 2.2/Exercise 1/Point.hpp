//Level 3
//2.2 - The Class Concept​
//Exercise 1
//A header file for the Point class with private members for the x- and y-coordinates. 
//Point.hpp
//Add the #ifndef/#define/#endif statements to avoid multiple inclusion.


#ifndef POINT_HPP
#define POINT_HPP

#include<iostream>
#include<string>
using namespace std;

class Point
{
private:
	double m_x;		// x-coordinates
	double m_y;		// y-coordinates

public:
	Point();	//Default constructor
	~Point();	// Destructor

	// Modifiers
	//Settter functions for the x- and y-coordinates (SetX() and SetY() functions).
	void SetX(double newxval);		// Set the x value
	void SetY(double newyval);		// Set the y value
	
	//Selectors
	// Getter functions for the x- and y-coordinates (GetX() and GetY() functions).
	double GetX();	
	double GetY();	

	string ToString();		//A string description of the point.
};

#endif 