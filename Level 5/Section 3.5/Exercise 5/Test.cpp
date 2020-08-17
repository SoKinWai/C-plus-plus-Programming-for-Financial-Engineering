//3.5 - Polymorphism
//Exercise 5: Template Method Pattern
//Create a Print() function that is printing the shape information to the cout object. The Print() function can use the ToString() to obtain the string to print.
//Test program

#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Shape.hpp"
#include<string>
#include<iostream>
using namespace std;

void main()
{
	//Create a point and line object and call the Print() function. 
	Point p(2.0, 6.0);  // create a point
	Line l(Point(1.0, 0.0), Point(5.0, 0.0));				// create a line

	p.Print();			// Print() point info
	l.Print();			// Print() line info


	//Does it print the right information even when point and line do not have the Print() function?
	//Yes!

}
