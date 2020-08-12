//Constructors as conversion operator​
//To prevent the usage of constructors are implicit conversion operators, declare the constructor as explicit:
//explicit Point(double value)
// still use the constructor as conversion operator but then explicitly:
//if (p == (Point)1.0) cout << "Equal!" << endl
//Test program.

#include "Point.hpp"
#include<string>
#include<iostream>
using namespace std;

void main()
{
	Point p(1.0, 1.0);
	
	//if (p == 1.0) cout << "Equal!" << endl;
	//else cout << "Not equal" << endl;

	if (p == (Point)1.0) cout << "Equal!" << endl;
	else cout << "Not equal" << endl;
}