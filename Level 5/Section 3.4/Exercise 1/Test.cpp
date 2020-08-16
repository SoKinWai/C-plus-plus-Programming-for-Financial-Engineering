//3.4 - Simple Inheritance​
//Exercise 1: Colon Syntax
//The colon syntax can improve the performance of constructors. 
//Execute the following code in the test program and count the number of point constructor, destructor and assignment calls: Line l;
//Change the constructors in the Line class to use the colon syntax to set the start- and end-point data members and run the test program again. 
//Is the number of point constructor, destructor and assignment calls less than before?

#include "Line.hpp"
#include <string>
#include <iostream>
using namespace std;

void main()
{
	Line l;

	//Is the number of point constructor, destructor and assignment calls less than before?
	//Yes.
	//Becasue for with colon syntax:
	//The constructors accept x- and y-coordinates show 2 times.
	//The destructors show 2 times.

	//for without colon syntax:
	//The default constructors show 2 times.
	//The constructors accept x- and y-coordinates show 2 times. 
	//The assignment opeators show 2 times.
	//The destructors show 4 times.
}
