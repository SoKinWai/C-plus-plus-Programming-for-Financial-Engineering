//Ostream << Operator
//Send a point or a line directly to the cout object without calling the ToString() method, just as with the primitive types. 
//Adding a << operator function that has on the left an std::ostream and on the right the point or line object.
//Since you can¡¯t add a member function to the std::ostream class, you have to create it as a global function (outside the class definition, but inside the class header file):
//ostream& operator << (ostream& os, const Point& p); // Send to ostream.
//The implementation uses the << operator to send data to the os input argument. Since it is a global function, you can¡¯t access the private members of Point.
//Also create a similar << operator for printing lines (and circles if you made a circle class). Adapt the test program to test the << operator for points and lines.
//Test program.

#include "Line.hpp"
#include "Circle.hpp"
#include "Point.hpp"
#include<string>
#include<iostream>
using namespace std;

void main()
{
	//Test the Point class.
	Point p_a(1, 2);
	Point p_b(5, 0);

	cout << p_a.ToString() << " , " << p_b.ToString() << endl;

	// Negate the coordinates.
	Point p_c = -p_a;
	cout << "- " << p_a.ToString() << ", the result is: " << p_c.ToString() << endl;

	// Scale the coordinates.
	p_c = p_a * 3.0;
	cout << p_a.ToString() << " * 3.0, the result is: " << p_c.ToString() << endl;

	// Add coordinates.
	p_c = p_a + p_b;
	cout << p_a.ToString() << " + " << p_b.ToString() << ", the result is: " << p_c.ToString() << endl;

	// Equally compare operator.
	cout << "(" << p_a.ToString() << " == " << p_b.ToString() << ") , the result is: " << (p_a == p_b) << endl;

	// Assignment operator.
	p_c = p_a;
	cout << "p_c =" << p_a.ToString() << ", so p_c will become: " << p_c.ToString() << endl;

	// Scale the coordinates & assign.
	p_c *= 3.0;
	cout << "p_c*=3.0, so p_c will become: " << p_c.ToString() << endl;

	//Test << operatpor in the Point class.
	cout << "Point p_a is: " << endl;
	cout << p_a;

	//Test the Line class.
	const Point p_d(2, 0);
	const Point p_e(3, 0);
	Line l_a(p_d, p_e);
	cout << "Line l_a: " << endl << l_a.ToString() << endl;

	// Assignment operator
	Line l_b = l_a;
	cout << "l_b=l_a" << endl << "Line l_b will become: " << endl << l_b.ToString() << endl;

	//Test << operator in the Line class.
	cout << "Line l_a is: " << endl;
	cout << l_a;

	//Test the Circle class.
	const Point p_center(0, 0);
	double m_radius = 2.0;
	Circle c_a(p_center, m_radius);
	cout << "Circle c_a: " << endl << c_a.ToString() << endl;

	// Assignment operator
	Circle c_b = c_a;
	cout << "c_b=c_a" << endl << "Circle c_b will become: " << endl << c_b.ToString() << endl;

	//Test << operator in the Circle class.
	cout << "Circle c_a is: " << endl;
	cout << c_a;
}