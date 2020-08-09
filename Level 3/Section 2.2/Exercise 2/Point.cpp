//Level 2
//2.2 - The Class Concept​
//Exercise 2: Distance Functions​
//The source file that implements the Point class defined in the header file.
//The source file must include the header file.
//Making the string in the ToString() function, requires conversion of the double coordinates to a string. 
//This requires the “sstream” header file.
//Use the str() function to retrieve the string from the string buffer. 
//Use the std::sqrt() function from the “cmath” header file to implement the Pythagoras algorithm.



#include "Point.hpp"
#include<cmath>
#include<sstream>
using namespace std;

Point::Point()		//Default constructor
{
	
}

Point::~Point()		//Destructor
{
	
}

void Point::SetX(double newxval)
{
	m_x = newxval;
}

void Point::SetY(double newyval)
{
	m_y = newyval;
}

double Point::GetX()
{
	return m_x;
}

double Point::GetY()
{
	return m_y;
}


string Point::ToString()
{
	stringstream ss;
	ss << "Point(" << m_x << "," << m_y << ")";
	return ss.str();
}


double Point::DistanceOrigin()
{
	return sqrt(pow(m_x, 2) + pow(m_y, 2));
}

double Point::Distance(Point p)
{
	return sqrt(pow(m_x - p.m_x, 2)+ pow(m_y - p.m_y, 2));
}