//Level 2
//1.6 - The Preprocessor​
//Exercise 2
//Use two macros to get the maximum.
//HW 1.6.2
//1.6.2.cpp


#include<stdio.h>
#include"Defs.h"


int main()
{
	int x;
	int y;
	int z;
	printf("Please enter three integers x,y and z(please add , between x,y and z):\n");     //Input 3 integers x,y and z. Don't forget add , bewteen x,y and z
    scanf_s("%d,%d,%d", &x, &y, &z);
	printf("The maximum value of x and y is:%d\n", MAX2(x, y));		//Print the max value of x and y by using MAX2(x,y).
	printf("The maximum value of x,y and z is:%d\n",MAX3(x, y, z));		//Print the max value of x,y and z by using MAX3(x,y).
	return 0;
}