//Level 3
//2.3 - Improving your Classes​
//Exercise 2: Pass by Reference​
//Pass by Reference​ in the Distance()  function.
//Change the Distance()  function so that it passes the input point “by reference” so that no copy is made. 
//Pass it as “const reference” to make it impossible to change the input point from within the Distance() function.

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

	//Modifiers
	//Setter functions for x- and y-coordinates.
	void SetX(double new_x);
	void SetY(double new_y);

	//Selectors
	//To access functions
	//Getter functions for x- and y-coordinates.
	double GetX();
	double GetY();

	

	string ToString();						//To string description of the point.

	//To calculate the distance between two points.
	//Pass the Distance()  function as “const reference”
	double Distance(const Point& p);
};

#endif

