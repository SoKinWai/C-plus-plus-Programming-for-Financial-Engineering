//Level 3
//2.3 - Improving your Classes​
//Exercise 1: Extra Constructors​
//To Improve the Classes.​
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
	cout<<"Please enter x- and y- coordinates for point 1 by following format:"<< endl << "x y" << endl;

	cin >> x_a >> y_a;

	//Creat a Point 1 object using the default constructor.
	//Point point_1;

	//Set the coordinate entered by the user using the setter functioin for point 1.
	//point_1.SetX(x_a);
	//point_1.SetY(y_a);
	
	Point point_1(x_a, y_a);

	//Print the description of the point 1 return by the ToString() function.
	cout << point_1.ToString() << endl;

	//Print the coordinater for point 1 by using the get functions. 
	cout << point_1.GetX() << " " << point_1.GetY() << endl;

	//Let the user enter x- and y- coordinates for point 2
	cout << "Please enter x and y for point 2 by following format:" << endl << "x y" << endl;

	cin >> x_b >> y_b;

	Point point_2(x_b, y_b);

	//Print the description of the point 2 return by the ToString() function.
	cout << point_2.ToString() << endl;

	//Print the coordinater for point 2 by using the get functions. 
	cout << point_2.GetX() << " " << point_2.GetY() << endl;

	//Print the distance between point 1 and point 2.
	cout << "The distance between point 1 and point 2 is:" << point_1.Distance(point_2) << endl;
	
	//This was a little experiment before adding a copy constructor and a constructor that accepts x- and y-coordinates.
	//The constructor were called two times.
	//The destructor  were called three times.
	
	
	//The number of destructor calls are three times.
	//The number of copy constructor call is one time.
	//The number of constructor that accepts x- and y-coordinates' calls are two times.
	//The number of copy constructor calls and the number of constructor that accepts x- and y-coordinates' calls are the same as the number of destructor calls.
}
