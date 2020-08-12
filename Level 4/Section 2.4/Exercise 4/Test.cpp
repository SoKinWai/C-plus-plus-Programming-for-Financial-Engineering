//Friends
//Move the << operator of Point and Line inside the class definition and declare it as friend.
//The function remains a global function but it can now access the data members directly without the need for calling the getters or ToString() function.

#include "Line.hpp"
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
	cout <<endl<< "Line l_a: " << endl << l_a.ToString() << endl;

	// Assignment operator
	Line l_b = l_a;
	cout << "l_b=l_a" << endl << "Line l_b will become: " << endl << l_b.ToString() << endl;

	//Test << operator in the Line class.
	cout << "Line l_a is: " << endl;
	cout << l_a;

}