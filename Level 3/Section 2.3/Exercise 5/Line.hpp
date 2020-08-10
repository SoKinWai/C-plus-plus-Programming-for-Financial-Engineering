//Level 3
//2.3 - Improving your Classes​
//Exercise 5: Line Class​
//Create a Line class.
//The Line class has a start- and an end-point.
//The Line class should have two Point objects as data members. 
//Use const arguments, const functions and pass objects by reference where applicable.


#ifndef Line_HPP
#define Line_HPP
#include "Point.hpp"
#include <iostream>
using namespace std;

class Line
{
private:
	Point p_start;													//The start point.
	Point p_end;													//The end point.

public:
	Line();															//Default constructor.
	Line(const Point& p_start, const Point& p_end);					//Constructor with a start- and end-point.
	Line(const Line& l);										    //Copy constructor.
	
	~Line();														//Destructor.
	
	//Modifiers
	//Overloaded setters for the start- and end-point.
	void P1(const Point& p_newstart);
	void P2(const Point& p_newend);
	
	//Selectors															
	//To access functions.
	//Overloaded getters for the start- and end-point.
	const Point& P1() const;
	const Point& P2() const;

	//A ToString() function that returns a description of the line.
	string ToString() const;

	//A Length() function that returns the length of the line. 
	double Length() const;
};
#endif

