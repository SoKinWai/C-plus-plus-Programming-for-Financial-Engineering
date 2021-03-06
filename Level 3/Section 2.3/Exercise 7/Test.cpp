//Inline Functions.
//Test program.

#include"Point.hpp"
#include<string>
#include<iostream>
using namespace std;

void main()
{
	double x_a;
	double x_b;
	double y_a;
	double y_b;

	//Let the user enter x- and y- coordinates for point 1.
	cout << "Please enter x- and y- coordinates for point 1 by following format:" << endl << "x y" << endl;

	cin >> x_a >> y_a;

	Point point_1(x_a, y_a);

	//Print the description of the point 1 return by the ToString() function.
	cout << point_1.ToString() << endl;

	//Print the coordinater for point 1 by using the get functions. 
	cout << point_1.X() << " " << point_1.Y() << endl;

	//Let the user enter x- and y- coordinates for point 2
	cout << "Please enter x and y for point 2 by following format:" << endl << "x y" << endl;

	cin >> x_b >> y_b;

	Point point_2(x_b, y_b);

	//Print the description of the point 2 return by the ToString() function.
	cout << point_2.ToString() << endl;

	//Print the coordinater for point 2 by using the get functions. 
	cout << point_2.X() << " " << point_2.Y() << endl;

	//Print the distance between point 1 and point 2.
	cout << "The distance between point 1 and point 2 is:" << point_1.Distance(point_2) << endl;

	const Point cp(1.5, 3.9);
	cout << cp.X() << endl;
}

