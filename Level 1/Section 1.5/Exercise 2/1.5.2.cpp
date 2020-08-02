//1.5 - Functions and Scope of Variables​
//Exercise 2
//Write a C-program that prints the factorials of a number.
//6! (six factorial) is the same as 6 * 5 * 4 * 3 * 2 * 1
//Must make use of a recursive function.

#include<stdio.h>

int factorial_function(unsigned int a)			
{                                                                 
	if (a ==0)
	{
		return 1;				/*0!=1*/
	}
	
	else {
		return a * factorial_function(a - 1);		/*factorial_function=a*facorial_function(a-1).*/
	}
}

void main()
{      
	// Return the factorials of the integer.
	 int a;
	 
	 printf("Please enter a non negative integer:\n");		/*Ask the user to enter a non negative integer.*/
	 
	 scanf_s("%d", &a);
	 
	 printf("Factorial is:%d\n", factorial_function(a));
	 
}
