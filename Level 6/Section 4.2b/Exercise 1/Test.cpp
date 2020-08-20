//4.2b - Advanced Templates​
//Exercise 1: Static Variable for Array Default Size
//Test program

#include <iostream>
#include "Array.hpp"
void main()
{	
	cout << Array<int>::DefaultSize() << endl;			//5. It is to show the benefits by using static default size function.

	//What values are printed?  Can you explain the result?
	Array<int> intArray1;
	Array<int> intArray2;
	Array<double> doubleArray;
														//Because all array are initialised by the d_default_size = 5, that means the default size is 5. That's why the following 3 values are 5.
	cout << intArray1.DefaultSize() << endl;			//5		
	cout << intArray2.DefaultSize() << endl;			//5		
	cout << doubleArray.DefaultSize() << endl;			//5		

	intArray1.DefaultSize(15);							//Because it sets the default size of Array1 to 15, the first value is 15.

	cout << intArray1.DefaultSize() << endl;			//15
	cout << intArray2.DefaultSize() << endl;			//15  Because in Array<int>, any object's static member is independent. That's why Array1's default size is set to 15, the deafult size of Array2 is set to 15 too.
	cout << doubleArray.DefaultSize() << endl;			//5	Beacause it is Array<double>, it remains 5. 




}