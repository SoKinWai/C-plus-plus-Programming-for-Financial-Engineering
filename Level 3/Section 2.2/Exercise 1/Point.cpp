//Level 3
//2.2 - The Class Concept​
//Exercise 1
// The source file that implements the Point class defined in the header file
//The source file must include the header file.
//Making the string in the ToString() function, requires conversion of the double coordinates to a string. 
// Easiest is to use a std::stringstream object and the standard stream operators (as with iostream) to create the string.
//This requires the ¡°sstream¡± header file. Use the str() function to retrieve the string from the string buffer.


#include"Point.hpp"
#include<sstream>
using namespace std;

Point::Point()		
{

}

Point::~Point()				
{

}

// Modifiers
//Set the m_x value 
void Point::SetX(double newxval)
{
	m_x = newxval;
}

//Set the m_y value
void Point::SetY(double newyval)
{
	m_y = newyval;
}

//Selectors
// Access the m_x value 
double Point::GetX()
{
	return m_x;
}

// Access the m_y value
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