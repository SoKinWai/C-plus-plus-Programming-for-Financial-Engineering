//Ostream << Operator
//Send a point or a line directly to the cout object without calling the ToString() method, just as with the primitive types. 
//Adding a << operator function that has on the left an std::ostream and on the right the point or line object.
//Since you can¡¯t add a member function to the std::ostream class, you have to create it as a global function (outside the class definition, but inside the class header file):
//ostream& operator << (ostream& os, const Point& p); // Send to ostream.
//The implementation uses the << operator to send data to the os input argument. Since it is a global function, you can¡¯t access the private members of Point.
//Also create a similar << operator for printing lines (and circles if you made a circle class). Adapt the test program to test the << operator for points and lines.


#ifndef Line_HPP
#define Line_HPP
#include "Point.hpp"
#include <iostream>
using namespace std;

class Line
{
private:
	Point p_start;													//The start point.
	Point p_end;													//The end point.

public:
	Line();															//Default constructor.
	Line(const Point& p_start, const Point& p_end);					//Constructor with a start- and end-point.
	Line(const Line& l);										    //Copy constructor.

	~Line();														//Destructor.

	//Selectors															
	//To access functions.
	//Overloaded getters for the start- and end-point.
	const Point& P1() const;
	const Point& P2() const;

	//Modifiers
	//Overloaded setters for the start- and end-point.
	void P1(const Point& p_newstart);
	void P2(const Point& p_newend);

	//A ToString() function that returns a description of the line.
	string ToString() const;

	//A Length() function that returns the length of the line. 
	double Length() const;

	//Member Operator Overloading
	Line& operator = (const Line& source);							// Assignment operator

};

ostream& operator << (ostream& os, const Line& l);					// Send to ostream.

#endif
