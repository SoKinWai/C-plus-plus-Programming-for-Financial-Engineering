//Level 3
//2.3 - Improving your Classes​
//Exercise 5: Line Class​
//Test program.

#include "Line.hpp"
#include "Point.hpp"
#include<string>
#include<iostream>
using namespace std;

void main()
{
	double x_a;
	double x_b;
	double y_a;
	double y_b;

	//Let the user enter x- and y- coordinates for the start point.
	cout << "Please enter x- and y- coordinates for start point by following format:" << endl << "x y" << endl;

	cin >> x_a >> y_a;

	//Let the user enter x- and y- coordinates for the end point.
	cout << "Please enter x and y for the end point by following format:" << endl << "x y" << endl;

	cin >> x_b >> y_b;

	//Creat the start and the end points.
	const Point p_start(x_a, y_a);
	const Point p_end(x_b, y_b);

	//Create the line object.
	Line l(p_start, p_end);

	cout << l.ToString() << "," << "the length is:" << l.Length() << endl;
}