//3.6 - Exception Handling​
//Exercise 1: Bounds Checking Array
//Test prpgram

#include <string>
#include <iostream>
#include "Array.hpp"
using namespace std;

void main()
{
	//Create an Array object and access an element that does not exist.
	//Run the program. What happens?
	Array arr(2);
	//cout << arr[10] << endl;									Debug error!

	arr[0] = Point(3, 7);								
	arr[1] = Point(4, 8);
	
	cout << "The elements are:" << endl;
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	
	//Place the code inside a try ... catch block that catches an int.
	
	cout << endl;
	//Try to catch the square bracket operator Exception
	cout << "Try to catch the square bracket operator Exception:" << endl;
	try
	{
		cout << arr[10] << endl;								//The square bracket operator Exception is out of bound
	}

	//In the catch handler, print an error message.
	catch (int err)
	{
		if (err == -1)	cout << "The square bracket operator Exception is out of bound." << endl;
	}

	catch (...)
	{
		cout << "An unhandled exception has occurred" << endl;
	}

	
	cout << endl;
	//Try to catch const version of the square bracket operator Exception
	cout << "Try to catch const version of the square bracket operator Exception:" << endl;
	try
	{
		const Array arr(2);
		cout << arr[10] << endl;								//The const version of the square bracket operator Exception
	}

	//In the catch handler, print an error message.
	catch (int err)
	{
		if (err == -1)	cout << "The const version of the square bracket operator Exception." << endl;
	}

	catch (...)
	{
		cout << "An unhandled exception has occurred" << endl;
	}
	
	cout << endl;
	//Try to catch SetElement() Exception
	cout << "Try to catch SetElement() Exception:" << endl;
	try 
	{
		arr.SetElement(10, Point(4, 8));					//SetElement() is out of bound
	}

	catch (int err)
	{
		if (err == -1)
			cout << "SetElement() is out of bound." << endl; 
	}

	catch (...)
	{
		cout << "An unhandled exception has occurred" << endl;
	}

	cout << endl;
	//Try to catch GetElement() Exception
	cout << "Try to catch GetElement() Exception:" << endl;
	try
	{
		cout << arr.GetElement(10) << endl;					//GetElement() is out of bound
	}

	catch (int err)
	{
		if (err == -1)
			cout << "GetElement() is out of bound." << endl;
	}

	catch (...)
	{
		cout << "An unhandled exception has occurred" << endl;
	}

	
	
}