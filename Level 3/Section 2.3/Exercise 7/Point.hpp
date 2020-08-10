//Inline Functions​
//Inline functions can speed up the execution of short functions because the code of such function will be copied in place instead of calling that function.
//Make the setters and getters of the Point class inline functions.
// Use normal inline (outside the class declaration) for the getters and default inline (inside the class declaration) for the setters. 
//Note that the implementation of the normal inline functions must be in the header file; else they will not be inlined.

#ifndef Point_HPP
#define Point_HPP
#include <iostream>
using namespace std;

class Point
{
private:
	//x- and y-coordinates 
	double m_x;
	double m_y;

public:
	Point();								//Default constructor.
	Point(const Point& p);					//Copy constructor.
	Point(double xval, double yval);		//The constructor that accepts x- and y-coordinates.

	//Destructor
	~Point();
	
	//Modifiers
	//Setter functions for x- and y-coordinates.
	void X(double x_new) { m_x = x_new; }
	void Y(double y_new) { m_y = y_new; }
	
	//Selectors 
	//To access functions
	//Getter functions for x- and y-coordinates.
	double X() const;
	double Y() const;

	//To string description of the point.
	string ToString() const;

	//To calculate the distance between two points.
	double Distance(const Point& p) const;
};

inline double Point::X() const { return m_x; }
inline double Point::Y() const { return m_y; }

#endif




