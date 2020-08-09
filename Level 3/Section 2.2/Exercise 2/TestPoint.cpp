//Level 2
//2.2 - The Class Concept​
//Exercise 2: Distance Functions​
//A test program (separate source file with a main() function) for the Point class
// Include the point header file.
//Ask the user for the x- and y-coordinates using the std::cin object (needs the “iostream” header file).
//The main program to print the distance between the origin and another point and test it.

#include "Point.hpp"
#include <iostream>
#include <string>
using namespace std;

void main()
{   
	double x_a;
	double x_b;
	double y_a;
	double y_b;

	//Let the user enter x- and y- coordinates for point 1
	cout << "Please enter x and y for point 1 by following format:" << endl << "x y" << endl;

	cin >> x_a >> y_a;

	//Creat a Point 1 object using the default constructor.
	Point point_1;

	//Set the coordinate entered by the user using the setter functioin for point 1.
	point_1.SetX(x_a);
	point_1.SetY(y_a);

	//Print the description of the point 1 return by the ToString() function.
	cout << point_1.ToString()<<endl;
	
	//Print the coordinater for point 1 by using the get functions. 
	cout << point_1.GetX() << " " << point_1.GetY() << endl;

    //Let the user enter x- and y- coordinates for point 2
	cout << "Please enter x and y for point 2 by following format:" << endl << "x y" << endl;

	cin >> x_b >> y_b;

	//Let the user enter x- and y- coordinates for point 2.
	Point point_2;

	//Set the coordinate entered by the user using the setter functioin for point 2.
	point_2.SetX(x_b);
	point_2.SetY(y_b);

	//Print the description of the point 2 return by the ToString() function.
	cout << point_2.ToString() << endl;
	
	//Print the coordinater for point 2 by using the get functions. 
	cout << point_2.GetX() << " " << point_2.GetY() << endl;

	//Print the distance between point 1 and the origin.
	cout << "The distance between point 1 and the origin is:" << point_1.DistanceOrigin() << endl;

	//Print the distance between point 1 and point 2.
	cout << "The distance between point 1 and point 2 is:" << point_1.Distance(point_2) << endl;

}