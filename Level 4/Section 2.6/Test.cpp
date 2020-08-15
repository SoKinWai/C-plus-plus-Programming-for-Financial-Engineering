//2.6 - Namespaces​
//Exercise 1: CAD and Container Namespaces​
//In the main program, the full namespace for Point class.
//In the main program, using declaration for using a single class (Line).
//In the main program, using declaration for a complete namespace (Containers).
//In the main program, using the Circle class by creating a shorter alias for the YourName::CAD namespace.
//Place the CAD classes (Shape,Point, Line, etc) in the namespace: YourName::CAD
//Place the container classes (Array) in the namespace: YourName::Containers
//Test Program.

#include "Array.hpp"
#include "Point.hpp"
#include "Circle.hpp"
#include "Line.hpp"
#include <string>
#include <iostream>

void main()
{
	//The full namespace for Point class.
	Jianwei_Su::CAD::Point p_a(1.3, 4.3);
	Jianwei_Su::CAD::Point p_b(2.3, 1.1);
	cout << "The full namespace for Point class: " << endl;
	cout << "Point p_a is: " << p_a << ", Point p_b is:" << p_b << endl << endl;

	//Using declaration for using a single class (Line).
	using Jianwei_Su::CAD::Line;
	cout << "Using declaration for using a single class (Line):" << endl;
	cout << Line(p_a, p_b) << endl << endl;

	//Using declaration for a complete namespace (Containers).
	using namespace Jianwei_Su::Containers;
	Array arr_1(1);
	arr_1[0] = Jianwei_Su::CAD::Point(4.2, 3.5);
	cout << "Using declaration for a complete namespace (Containers): " << endl;
	cout << arr_1[0] << endl <<endl;

	//Using the Circle class by creating a shorter alias for the YourName::CAD namespace.
	namespace Shorter_alias = Jianwei_Su::CAD;
	using Shorter_alias::Circle;
	Circle c(Shorter_alias::Point(0, 0), 2);
	cout << "Using the Circle class by creating a shorter alias for the YourName::CAD namespace: " << endl;
	cout << c;
}
