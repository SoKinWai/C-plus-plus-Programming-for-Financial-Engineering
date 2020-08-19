//4.2a - Introduction to Templates​
//Exercise 1: Templated Array Class
//In the test program create an array of points and test it
//Test program

#include "Array.hpp"
//#include "Array.cpp"	
#include "Point.hpp"
#include <iostream>
#include <string>
using namespace std;

void main()
{
	int size = 2;

	//Create arrays of points
	Array<Point> points_1;
	Array<Point> points_2(size);				//Initialize points by using the template
	

	//Test Size() function
	cout << "Test Size() function:" << endl;
	cout << "The size of array is: "<<points_1.Size() <<endl<<endl;
												
	//Test square bracket operator and assignment operator
	cout << "Test square bracket operator and assignment operator: " << endl;
	points_1[0] = Point(1.5, 4.6);
	points_1[1] = Point(1.1, 7.6);

	cout << "Points 1 are: " << points_1[0]<<"," << points_1[1]<< endl;
	cout << "Points 2 are:" << endl;
	points_2 = points_1;
	for (int a = 0;a < size;a++)
	{
		cout << points_2[a] << endl;
	}

	//Test GetElement() function
	cout << endl << "Test GetElement() function:" << endl;
	cout << "The elements of Points 1 are: " << points_1.GetElement(0) << "," << points_1.GetElement(1) << endl<<endl;

	//Test SetElement() function
	points_2.SetElement(0, Point(7.8, 4.4));
	points_2.SetElement(1, Point(6.2, 3.1));

	cout << "Test SetElement() function: " << endl;
	cout << "The elements of Points 2 are: " << points_2[0] << "," << points_2[1] << endl << endl;
	
	//Use the copy constructor
	Array<Point> points_3(points_2);
	cout << "Use the copy constructor:" << endl;
	cout << "The elements of Points 3 are: " << points_3[0] << "," << points_3[1] << endl << endl;
	
	
	//Test Const version of the square bracket operator.
	const Array<Point> points_4(points_3);
	cout << "Test Const version of the square bracket operator:" << endl;
	cout << "The elements of Points 4 are: " << points_4[0] << "," << points_4[1] <<endl;
}

/*Tip, by placing the following code at the end of the array header file, but before the header file’s #endif, 
the client can keep including the header file for template classes instead of the source file. 
Can you explain how this works? */

// It works. Because "Array.cpp" is already in the header file, that means we do not need to add "Array.cpp" in the test program.

//#ifndef Array_cpp 
//#include "Array.cpp"
//#endif

//These codes are already in the header file.