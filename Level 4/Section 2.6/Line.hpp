//2.6 - Namespaces​
//Exercise 1: CAD and Container Namespaces​
//To avoid name conflicts, programmers can place their classes in a namespace. 
//For example the standard library is placed in a namespace called std.
//Should put the classes in own namespace.

#ifndef Line_HPP
#define Line_HPP
#include "Point.hpp"
#include <iostream>
using namespace std;

namespace Jianwei_Su
{
	namespace CAD
	{
		class Line
		{
		private:
			Point p_start;															//The start point.
			Point p_end;															//The end point.

		public:
			Line();																	//Default constructor.
			Line(const Point& p_start, const Point& p_end);							//Constructor with a start- and end-point.
			Line(const Line& l);													//Copy constructor.

			~Line();																//Destructor.

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
			Line& operator = (const Line& source);										// Assignment operator

			// Move the << operator of Line inside the class definition and declare it as friend. 
			friend ostream& operator << (ostream& os, const Line& l);					// Send to ostream.
		};

	}
}

#endif


