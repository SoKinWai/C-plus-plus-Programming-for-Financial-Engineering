//4.2b - Advanced Templates​
//Exercise 1: Static Variable for Array Default Size
//Add a static data member to the Array class indicating the default size.
//Also add static functions to set and get the default size.
//In the default constructor, use the static default size variable instead of a literal value to set the array size.


#ifndef Array_HPP
#define Array_HPP
#include "ArrayException.hpp"
#include <iostream>
using namespace std;

template <typename T>
class Array
{
private:
	T * m_data;											//A data member for a dynamic C array of Point objects 
	int m_size;                                         //A data member for the size of the array.
	static int d_default_size;							//A static data member to the Array class indicating the default size.

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

	//Add static functions to set and get the default size.
	static int DefaultSize();
	static void DefaultSize(int size_new);


};




#ifndef Array_CPP // Must be the same name as in source file #define
#include "Array.cpp"
#endif

#endif



