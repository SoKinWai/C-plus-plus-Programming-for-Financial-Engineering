//Ostream << Operator
//Send a point or a line directly to the cout object without calling the ToString() method, just as with the primitive types. 
//Adding a << operator function that has on the left an std::ostream and on the right the point or line object.
//Since you can¡¯t add a member function to the std::ostream class, you have to create it as a global function (outside the class definition, but inside the class header file):
//ostream& operator << (ostream& os, const Point& p); // Send to ostream.
//The implementation uses the << operator to send data to the os input argument. Since it is a global function, you can¡¯t access the private members of Point.
//Also create a similar << operator for printing lines (and circles if you made a circle class). Adapt the test program to test the << operator for points and lines.


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


	~Point();							    //Destructor

	//To access functions
	//Getter functions for x- and y-coordinates.
	double X() const;
	double Y() const;

	//Modifiers
	//Setter functions for x- and y-coordinates.
	void X(double new_x);
	void Y(double new_y);

	string ToString() const;						//To string description of the point.

	//The distance between the origin and the point 1.
	double Distance() const;

	//To calculate the distance between two points.
	//Pass the Distance()  function as ¡°const reference¡±
	double Distance(const Point& p) const;


	//Member Operator Overloading
	Point operator - () const;						// Negate the coordinates.
	Point operator * (double factor) const;			// Scale the coordinates.
	Point operator + (const Point& p) const;		// Add coordinates.
	bool operator == (const Point& p) const;		// Equally compare operator.
	Point& operator = (const Point& source);		// Assignment operator.
	Point& operator *= (double factor);				// Scale the coordinates & assign.


};

ostream& operator << (ostream& os, const Point& p);  // Send to ostream.


#endif

