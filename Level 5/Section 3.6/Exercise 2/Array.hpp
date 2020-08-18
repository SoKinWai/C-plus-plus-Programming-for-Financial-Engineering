//3.6 - Exception Handling
//​Exercise 2: Exception Objects
//In the Array class, throw now a OutOfBoundsException object instead of an integer.


#ifndef Array_HPP
#define Array_HPP
#include "ArrayException.hpp"
#include "Point.hpp"
#include <iostream>
using namespace std;

class Array
{
private:
	Point * m_data;										//A data member for a dynamic C array of Point objects 
	int m_size;                                         //A data member for the size of the array.
public:
	Array();											//A default constructor.
	Array(int size);									//A constructor with a size argument.
	Array(const Array& pp);								//A copy constructor.
	virtual ~Array();									//A destructor. 

	//Member Operator Overloading
	Array& operator = (const Array& source);			//An assignment operator.
	Point& operator [] (int index);						//A square bracket operator.
	const Point& operator [] (int index) const;			//Const version of the square bracket operator.



	//To access functions
	int Size() const;									//A Size() function.
	Point& GetElement(int index) const;					//A GetElement() function.

	//Modifiers
	void SetElement(int index, const Point& new_p);		//A SetElement() function

};

#endif



