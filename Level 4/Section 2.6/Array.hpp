//2.6 - Namespaces​
//Exercise 1: CAD and Container Namespaces​
//To avoid name conflicts, programmers can place their classes in a namespace. 
//For example the standard library is placed in a namespace called std.
//Should put the classes in own namespace.
//Note that you can use only the CAD part of the namespace without the YourName part because the Point is also in the YourName namespace.


#ifndef Array_HPP
#define Array_HPP
#include "Point.hpp"
using namespace std;

namespace Jianwei_Su
{
	namespace Containers
	{
		class Array
		{
		private:
			CAD::Point * m_data;										//A data member for a dynamic C array of Point objects 
			int m_size;													//A data member for the size of the array.
		public:
			Array();													//A default constructor.
			Array(int size);											//A constructor with a size argument.
			Array(const Array& pp);										//A copy constructor.
			~Array();													//A destructor. 

			//Member Operator Overloading
			Array& operator = (const Array& source);					//An assignment operator.
			CAD::Point& operator [] (int index);						//A square bracket operator.
			const CAD::Point& operator [] (int index) const;			//Const version of the square bracket operator.



			//To access functions
			int Size() const;											//A Size() function.
			CAD::Point& GetElement(int index) const;					//A GetElement() function.

			//Modifiers
			void SetElement(int index, const CAD::Point& new_p);		//A SetElement() function

		};

	}
}

#endif

