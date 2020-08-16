//3.4 - Simple Inheritance​
//Exercise 2: Creating Shape Base Class
//In this exercise we are going to transform the Point and Line class into a Shape hierarchy 
//Test program.

#include "Point.hpp"
#include "Shape.hpp"
#include "Line.hpp"
#include <string>
#include <iostream>
using namespace std;

void main()
{
	Shape s;									//Create shape.
	Point p(10, 20);							//Create point.
	Line l(Point(1, 2), Point(3, 4));			//Create line.

	cout << s.ToString() << endl;				//Print shape.	The ID is:41.
	cout << p.ToString() << endl;				//Print point.	Point(10,20)
	cout << l.ToString() << endl;				//Print line.	The line of Point(1,2) to Point(3,4)

	cout << "Shape ID: " << s.ID() << endl;		//ID of the shape.	Shape ID:41
	cout << "Point ID: " << p.ID() << endl;		//ID of the point. Does this work?	Yes,it works. Point ID:18467
	cout << "Line ID: " << l.ID() << endl;		//ID of the line. Does this work?	Yes,it works. Line ID:19169

	Shape* sp;									//Create pointer to a shape variable.
	sp = &p;									//Point in a shape variable. Possible?	This is possible because the sp is pointing to the address of p.
	cout << sp->ToString() << endl;				//What is printed?	"The ID is:18467" is printed.

	//Create and copy Point p to new point.
	Point p2;
	p2 = p;
	cout << p2 << ", " << p2.ID() << endl;		// Is the ID copied if you do not call the base class assignment in point?
												//Yes, it is.  
												//Point(10,20), 18467


}