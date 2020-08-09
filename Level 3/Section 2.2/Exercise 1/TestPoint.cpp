//Level 3
//2.2 - The Class Concept​
//Exercise 1
//A test program (separate source file with a main() function) for the Point class
//Include the point header file.
//Ask the user for the x - and y - coordinates using the std::cin object(needs the “iostream” header file).

#include "Point.hpp"
#include <iostream>
#include <string>
using namespace std;

void main()
{
	double newxval;
	double newyval;

	//Ask the user for the x- and y-coordinates
	cout << "Please enter x and y by using this format:" << endl << "x y" << endl;

	cin >> newxval >> newyval;

	//Create a Point object using the default constructor.
	Point p;

	//Set the coordinates entered by the user using the setter functions.
	p.SetX(newxval);
	p.SetY(newyval);

	//Print the description of the point returned by the ToString() function.
	cout << p.ToString() << endl;

	//Print the point coordinates using the get functions.
	cout << p.GetX() << " " << p.GetY() << endl;
}