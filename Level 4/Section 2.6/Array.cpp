//2.6 - Namespaces​
//Exercise 1: CAD and Container Namespaces​
//To avoid name conflicts, programmers can place their classes in a namespace. 
//For example the standard library is placed in a namespace called std.
//Should put the classes in own namespace.
//Note that you can use only the CAD part of the namespace without the YourName part because the Point is also in the YourName namespace.

#include "Point.hpp"
#include "Array.hpp"
using namespace std;

namespace Jianwei_Su
{
	namespace Containers
	{
		Array::Array() : m_data(new CAD::Point[10]), m_size(10)							//A default constructor that allocates 10 elements.
		{
		}

		Array::Array(int size) : m_data(new CAD::Point[size]), m_size(size)				//A constructor with a size argument. 
		{
		}

		Array::Array(const Array& pp)													//A copy constructor. 
		{																				//Need to allocate a new C array with the same size and copy each element separately.
			m_data = new CAD::Point[pp.m_size];
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

		Array& Array::operator = (const Array& source)									//An assignment operator.
		{																				//Don’t forget to delete the old C array and allocate new memory before copying the elements. 
			if (this == &source)
			{
				return *this;
			}

			delete[] m_data;

			m_data = new CAD::Point[source.m_size];
			m_size = source.m_size;

			for (int a = 0; a < m_size; a++)
			{
				m_data[a] = source.m_data[a];
			}

			return *this;
		}

		CAD::Point& Array::operator [] (int index)										//A square bracket operator. 
		{																				//Return a reference so the [] operator can be used for both reading and writing elements.
			if (index >= m_size||index<0)														//When the index is out of bounds, return the first element.
			{
				return m_data[0];
			}

			return m_data[index];
		}

		const CAD::Point& Array::operator [] (int index) const							//Const version of the square bracket operator.
		{																				//why would need this?:
			if (index >= m_size||index<0)														//Because it allows array objects to declare as const to work
			{																			//Because it allows the user only to read and not to write.
				return m_data[0];
			}

			return m_data[index];
		}

		int Array::Size() const															//A Size() function that returns the size of the array.
		{
			return m_size;
		}

		CAD::Point& Array::GetElement(int index) const									//A GetElement() function. 
		{																				//Can return the element by reference since the returned element has a longer lifetime than the GetElement() function. 
			if (index >= m_size||index<0)														//When the index is out of bounds, return the first element. 
			{
				return m_data[0];
			}

			return m_data[index];
		}

		void Array::SetElement(int index, const CAD::Point& new_p)							//A SetElement() function that sets an element.
		{																				//When the index is out of bounds, ignore the “set”.
			if (index >= m_size||index<0)
			{
				return;
			}

			m_data[index] = new_p;
		}


	}
}