//2.5 - The Free Store
//Exercise 3: Creating Array Class​
//Test program.

#include "Array.hpp"
#include "Point.hpp"
#include <string>
#include <iostream>

using namespace std;

void main()
{
	Array arr_1;														//Use the default constructor.

	Array arr_2(3);														//Use the constructor with size as argument.

	//Test the [] operator to write.
	arr_2[0] = Point(2.2, 3.4);
	arr_2[1] = Point(2.9, 9.1);
	arr_2[2] = Point(5.1, 0.1);

	//Test the assignment operator.
	arr_1 = arr_2;
	
	cout << "Test the assignment operator: "<< endl;
	cout << "The arr_1 are:"<<endl;
	
	for (int a = 0; a < arr_1.Size(); a++)
	{
		cout << arr_1[a] << endl;
	}

	cout << endl;
	// Test the Size() function.
	//Test the [] operator to read.
	cout << "Test the Size() function and the [] operator to read: " << endl;
    cout << "The size of arr_2 is: " << arr_2.Size() << endl;
	cout << "The elements of arr_2 are: " << arr_2[0] << ", " << arr_2[1] << ", " << arr_2[2] << endl << endl;


	// Test the GetElement() function.
	cout << "Test the GetElement() function: " << endl;
	cout << "The size of arr_2 is: " << arr_2.Size() << endl; 
	cout << "The elements of arr_2 are: " << arr_2.GetElement(0) << ", " << arr_2.GetElement(1) << ", " << arr_2.GetElement(2) << endl<<endl;

	// Test the SetElement() function.
	arr_2.SetElement(0, Point(7.5, 9.7));
	arr_2.SetElement(1, Point(8.5, 3.9));
	arr_2.SetElement(2, Point(6.7, 1.2));
	cout << "Test the SetElement() function:" << endl;
	cout << "The size of arr_2 is: " << arr_2.Size() << endl;
	cout << "The elements of arr_2 are: " << arr_2[0] << ", " << arr_2[1] << ", " << arr_2[2] << endl << endl;



	//Use the copy constructor.
	Array arr_3(arr_2);
	cout << "Use the copy constructor:" << endl;
	cout << "The size of arr_3 is: " << arr_3.Size() << endl;
	cout << "The elements of arr_3 are: " << arr_3[0] << ", " << arr_3[1] << ", " << arr_3[2] << endl << endl;

	//Test the [] operator for const Array object.
	const Array arr_4(arr_2);
	cout << "Test the [] operator for const Array object: " << endl;
	cout << "The size of arr_4 is: " << arr_4.Size() << endl;
	cout << "The elements of arr_4 are: " << arr_4[0] << ", " << arr_4[1] << ", " << arr_4[2] << endl;

}
