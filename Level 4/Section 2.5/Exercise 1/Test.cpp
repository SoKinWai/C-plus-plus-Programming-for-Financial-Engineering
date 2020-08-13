//2.5 - The Free Store​.
//Exercise 1: Dynamically Creating Objects​.

#include "Point.hpp"
#include <string>
#include <iostream>
using namespace std;

void main()
{
	//Create Point objects on the heap with new using the default constructor, constructor with coordinates and the copy constructor and assign it to pointer (Point*) variables.
	//Can’t directly pass a pointer variable as argument to the copy constructor. 
	//The pointer must first be dereferenced when passing it to the copy constructor. (Point* p2=new Point(*p1)).

	Point* p_a = new Point();
	Point* p_b = new Point(0, 2);
	Point* p_c = new Point(*p_b);

	cout << "Point p_a:"<<*p_a << ", Point p_b: " << *p_b << ", Point p_c: " << *p_c << endl;
	
	//Call the Distance() function on the pointers and try to send the Point pointers to cout
	//Need to dereference the pointer when passing it as argument.
	cout << "The distance between Point p_a and Point p_c is:" << (*p_c).Distance(*p_a) << endl;

	//Don’t forget to delete the object created with new.
	delete p_a;
	delete p_b;
	delete p_c;

	//Create an array of points. 

	//Ask the user for the size of the array and read it using cin. 
	cout << "Please enter the size of the array of points ." << endl;

	//Create an array on the stack using the entered size. 
	int size;

	cin >> size;

	//A compiler error.
	//Point pp[size];

	//Arrays on the stack must have the size set at compile time.
	//Create the array on the heap using new. 
	Point* pp = new Point[size];												//I cannot use other constructor because with an array of Points, all points are created with the default constructor. 
			
	//Don’t forget to delete the array after use.
	//Don’t forget the square brackets when deleting arrays!
	delete[] pp;



}