//4.2a - Introduction to Templates​
//Exercise 1: Templated Array Class
//In the header file, declare the Array class as a template of type T.
//Replace all references to Point with T.
//Where an array is used as input or output, replace Array by Array<T>.
//Don’t forget that the program should now include the source file instead of the header file. Therefore, the source file should now also include #ifndef/#define/#endif statements.

#ifndef Array_HPP
#define Array_HPP
#include "ArrayException.hpp"
#include <iostream>
using namespace std;

template <typename T>
class Array
{
private:
	T* m_data;											//A data member for a dynamic C array of Point objects 
	int m_size;                                         //A data member for the size of the array.
public:
	Array();											//A default constructor.
	Array(int size);									//A constructor with a size argument.
	Array(const Array<T>& pp);							//A copy constructor.
	virtual ~Array();									//A destructor. 

	//Member Operator Overloading
	Array<T>& operator = (const Array<T>& source);		//An assignment operator.
	T& operator [] (int index);							//A square bracket operator.
	const T& operator [] (int index) const;				//Const version of the square bracket operator.



	//To access functions
	int Size() const;									//A Size() function.
	T& GetElement(int index) const;						//A GetElement() function.

	//Modifiers
	void SetElement(int index, const T& new_p);			//A SetElement() function

};

#ifndef Array_CPP // Must be the same name as in source file #define
#include "Array.cpp"
#endif

#endif


