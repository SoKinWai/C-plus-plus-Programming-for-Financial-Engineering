//Circle Class​.
//Test program.

#include "Circle.hpp"
#include "Point.hpp"
#include<string>
#include<iostream>
using namespace std;

void main()
{
	double x;
	double y;
	double radius;

	//Let the user enter the x- and y- coordinaters for the center.
	cout << "Please enter the x- and y- coordinaters for the center by following format:" << endl << "x y" << endl;

	cin >> x >> y;

	//Let the user enter the radius.
	cout << "Please enter the radius." << endl;

	cin >> radius;

	//Center object.
	Point p_center(x, y);

	//Circle object.
	Circle circle(p_center, radius);

	cout << circle.ToString()<< endl;
	cout << "Diameter is " << circle.Diameter() << "." << endl;
	cout << "Area is " << circle.Area() << "." << endl;
	cout << "Circumference is " << circle.Circumference() << "." << endl;
}