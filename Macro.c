//Level 2
//1.6 - The Preprocessor​
//Exercise 1
//Macro.c
//Write a C-program that contains two print macro calls. 
//The first prints the variable a, the second prints the variables a and b. 
//Printing happens by the use of the PRINT1 and PRINT2 macros that accept arguments. 
// The variables a and b gets their value in the function main().


#include <stdio.h>
#include "Defs.h"

int main()
{
	int a;
	int b;
	printf("Please enter two integers for a and b(please add a , between a and b):\n");		//Input a and b by following the format.
	scanf_s("%d,%d", &a, &b);
	PRINT1(a);						//Print the variable a.
	PRINT2(a, b);					//Print the variable a and b.
    return 0;
}