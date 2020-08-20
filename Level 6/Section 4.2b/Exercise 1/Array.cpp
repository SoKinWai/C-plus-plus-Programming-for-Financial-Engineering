//4.2b - Advanced Templates​
//Exercise 1: Static Variable for Array Default Size
//Add a static data member to the Array class indicating the default size.
//Initialise this static in the source file to a value.
//Also add static functions to set and get the default size.
//In the default constructor, use the static default size variable instead of a literal value to set the array size.

#ifndef Array_CPP
#define Array_CPP

#include <sstream>
#include<iostream>
#include "OutOfBoundsException.hpp"
#include "Array.hpp"
#include "ArrayException.hpp"
using namespace std;

//Initialise this static in the source file to a value.
template <typename T>
int Array<T>::d_default_size = 5;

//In the default constructor, use the static default size variable instead of a literal value to set the array size.
template <typename T>
Array<T>::Array() : m_data(new T[d_default_size]), m_size(d_default_size)		//A default constructor.
{
}

template <typename T>
Array<T>::Array(int size) : m_data(new T[size]), m_size(size)					//A constructor with a size argument. 
{
}

template <typename T>
Array<T>::Array(const Array<T>& pp)												//A copy constructor. 
{																				//Need to allocate a new C array with the same size and copy each element separately.
	m_data = new T[pp.m_size];
	m_size = pp.m_size;

	for (int a = 0; a < m_size; a++)
	{
		m_data[a] = pp.m_data[a];
	}
}

template <typename T>
Array<T>::~Array()																//A destructor. 
{																				//It should delete the internal C array. Don’t forget the square brackets.
	delete[] m_data;
}

template <typename T>
Array<T>& Array<T>::operator = (const Array<T>& source)							//An assignment operator.
{																				//Don’t forget to delete the old C array and allocate new memory before copying the elements. 
	if (this == &source)
	{
		return *this;
	}

	delete[] m_data;

	m_data = new T[source.m_size];
	m_size = source.m_size;

	for (int a = 0; a < m_size; a++)
	{
		m_data[a] = source.m_data[a];
	}

	return *this;
}

//In the GetElement(), SetElement() and index operator throw a OutOfBoundsException object instead of an integer.
template <typename T>
T& Array<T>::operator [] (int index)											//A square bracket operator. 
{																				//Return a reference so the [] operator can be used for both reading and writing elements.
	if (index >(m_size - 1) || index<0)											//When the index is out of bounds, return the first element.
	{
		throw OutOfBoundsException(index);
	}

	return m_data[index];
}

template <typename T>
const T& Array<T>::operator [] (int index) const								//Const version of the square bracket operator.
{																				//why would need this?:
	if (index >(m_size - 1) || index<0)											//Because it allows array objects to declare as const to work
	{																			//Because it allows the user only to read and not to write.
		throw OutOfBoundsException(index);
	}

	return m_data[index];
}

template <typename T>
int Array<T>::Size() const														//A Size() function that returns the size of the array.
{
	return m_size;
}

template <typename T>
T& Array<T>::GetElement(int index) const										//A GetElement() function. 
{																				//Can return the element by reference since the returned element has a longer lifetime than the GetElement() function. 
	if (index > (m_size - 1) || index<0)										//When the index is out of bounds, return the first element. 
	{
		throw OutOfBoundsException(index);
	}

	return m_data[index];
}

template <typename T>
void Array<T>::SetElement(int index, const T& new_p)							//A SetElement() function that sets an element.
{																				//When the index is out of bounds, ignore the “set”.
	if (index >(m_size - 1) || index<0)
	{
		throw OutOfBoundsException(index);
	}

	m_data[index] = new_p;
}

//Add static functions to set and get the default size.
template <typename T>
int Array<T>::DefaultSize()
{
	return d_default_size;
}

template <typename T>
void Array<T>::DefaultSize(int size_new)
{
	d_default_size = size_new;
}
#endif