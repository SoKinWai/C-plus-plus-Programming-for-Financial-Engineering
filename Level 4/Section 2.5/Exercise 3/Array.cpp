//2.5 - The Free Store
//Exercise 3: Creating Array Class​
//Let a class manage memory. 
//Then the client of that class does not have to manage memory and can’t forget to delete memory.
//Create an array class for Point objects 

#include "Point.hpp"
#include "Array.hpp"
using namespace std;

Array::Array() : m_data(new Point[10]), m_size(10)								//A default constructor that allocates 10 elements.
{
}

Array::Array(int size) : m_data(new Point[size]), m_size(size)					//A constructor with a size argument. 
{
}

Array::Array(const Array& pp)													//A copy constructor. 
{																				//Need to allocate a new C array with the same size and copy each element separately.
	m_data = new Point[pp.m_size];
	m_size = pp.m_size;

	for (int a = 0; a < m_size; a++)
	{
		m_data[a] = pp.m_data[a];
	}
}

Array::~Array()																	//A destructor. 
{																				//It should delete the internal C array. Don’t forget the square brackets.
	delete[] m_data;
}

//Add an assignment operator. Keep in mind you can’t copy only the C array pointers just as in the case of the copy constructor.
Array& Array::operator = (const Array& source)									//An assignment operator.
{																				
	if (this == &source)
	{
		return *this;
	}

	//Don’t forget to delete the old C array and allocate new memory before copying the elements. 
	delete[] m_data;

	m_data = new Point[source.m_size];
	m_size = source.m_size;

	for (int a = 0; a < m_size; a++)
	{
		m_data[a] = source.m_data[a];
	}

	return *this;
}

int Array::Size() const															//A Size() function that returns the size of the array.
{
	return m_size;
}

void Array::SetElement(int index, const Point& new_p)							//A SetElement() function that sets an element.
{																				//When the index is out of bounds, ignore the “set”.
	if (index > (m_size - 1) || index < 0)
	{
		return;
	}

	m_data[index] = new_p;
}

Point& Array::GetElement(int index) const										//A GetElement() function. 
{																				//Can return the element by reference since the returned element has a longer lifetime than the GetElement() function. 
	if (index > (m_size-1)||index<0)											//When the index is out of bounds, return the first element. 
	{
		return m_data[0];
	}

	return m_data[index];
}

Point& Array::operator [] (int index)											//A square bracket operator. 
{																				//Return a reference so the [] operator can be used for both reading and writing elements.
	if (index > (m_size - 1) || index < 0)										//When the index is out of bounds, return the first element.
	{
		return m_data[0];
	}

	return m_data[index];
}

const Point& Array::operator [] (int index) const								//Const version of the square bracket operator.
{																				//why would need this?:
	if (index > (m_size - 1) || index < 0)										//Because it allows array objects to declare as const to work
	{																			//Because it allows the user only to read and not to write.
		return m_data[0];
	}

	return m_data[index];
}
	

