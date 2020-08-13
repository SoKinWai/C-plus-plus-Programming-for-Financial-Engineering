//2.5 - The Free Store​
//Exercise 2: Creating Array of Pointers​
//With an array of Points, all points are created with the default constructor.
//When creating an array of pointers, each element in the array must be created separately but can be created with other constructors than the default constructor.

#include "Point.hpp"
#include <string>
#include <iostream>
using namespace std;

void main()
{
	const int size = 3;
	
	//Create an array of Point pointers with 3 elements on the heap.
	Point** arr_pp = new Point*[size];

	//Create for each element in the array a point on the heap.
	arr_pp[0] = new Point(2.0, 1.1);
	arr_pp[1] = new Point(3.1, 3.2);
	arr_pp[2] = new Point(4.2, 5.1);

	//Iterate the array and print each point in the array.
	for (int s = 0;s < 3;s++)
	{
		cout << *arr_pp[s] << endl;											//Use the constructors that accept x- and y-coordinates.
	}

	//Iterate the array again and delete each point in the array.
	for (int s = 0;s < 3;s++)
	{
		delete arr_pp[s];
	}

	//Delete the array itself.
	delete[] arr_pp;


	//The name of drawing of the memory layout is So's pic.Please check that. Thanks.

}