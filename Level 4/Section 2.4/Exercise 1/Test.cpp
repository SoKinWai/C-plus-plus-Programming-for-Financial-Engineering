//Test program
//Adding Operators to the Point class​
//Adding assignment operator to the Line class​.
//Adding assignment operator to the Circle class​.

#include "Line.hpp"
#include "Circle.hpp"
#include "Point.hpp"
#include<string>
#include<iostream>
using namespace std;

void main()
{
	//Test the Point class.
	Point p_a(0, 2);
	Point p_b(5, 0);
	
	cout << p_a.ToString() << " , " << p_b.ToString() << endl;

	// Negate the coordinates.
	Point p_c = -p_a;
	cout << "- " << p_a.ToString() << ", the result is: " << p_c.ToString()<< endl;
	
	// Scale the coordinates.
	p_c = p_a * 3.0;
	cout << p_a.ToString() << " * 3.0, the result is: " << p_c.ToString() << endl;

	// Add coordinates.
	p_c = p_a + p_b;
	cout << p_a.ToString() << " + " << p_b.ToString()<< ", the result is: " << p_c.ToString()<< endl;

	// Equally compare operator.
	cout << "(" << p_a.ToString() << " == " << p_b.ToString() << ") , the result is: " << (p_a == p_b) << endl;

	// Assignment operator.
	p_c = p_a;
	cout << "p_c =" << p_a.ToString() << ", so p_c will become: " << p_c.ToString() << endl;

	// Scale the coordinates & assign.
	p_c *= 3.0;
	cout << "p_c*=3.0, so p_c will become: " << p_c.ToString() << endl;

	//Test the Line class.
	const Point p_d(2,0);
	const Point p_e(3,0);
	Line l_a(p_d, p_e);
	cout << "Line l_a: " << endl << l_a.ToString() << endl;

	// Assignment operator
	Line l_b = l_a;
	cout << "l_b=l_a" << endl << "Line l_b will become: " << endl << l_b.ToString() << endl;

	//Test the Circle class.
	const Point p_center(0, 0);
	double m_radius = 2.0;
	Circle c_a(p_center, m_radius);
	cout << "Circle c_a: " << endl << c_a.ToString() << endl;

	// Assignment operator
	Circle c_b = c_a;
	cout << "c_b=c_a" << endl << "Circle c_b will become: " << endl << c_b.ToString() << endl;
}