//3.5 - Polymorphism​
//Exercise 3: Virtual Destructors
//Print some text in the destructors of the Shape, Point and Line classes.
//Test program.

#include "Point.hpp"
#include "Shape.hpp"
#include "Line.hpp"
#include <iostream>
#include <string>
using namespace std;

void main()
{
	Shape* shapes[3];
	shapes[0] = new Shape;
	shapes[1] = new Point;
	shapes[2] = new Line;

	for (int i = 0; i != 3; i++) delete shapes[i];

	//Will the proper destructors (including the destructor of the Shape base class) be called?
	//When the Shape destructor is not as virtual, the shape destructors are called 3 times.
	//No, they won't.
	

	//In this case, the derived class destructor will only be called when the destructor is declared virtual in the base class. 
	//Do this in the Shape class and run the code again. Are the proper destructors called now?
	//When the Shape destructor is as virtual, then:
	//the shape destructors are called 5 times.
	//the Point destructors are called 3 times.
	//the Line destructor is called 1 time.
	//The proper destructors are called now.
}