//1.5 - Functions and Scope of Variables​
//Exercise 3
//Write a program that consists of two source-files. 
//The first (Main.c) contains the main() function and gives the variable i a value. 
//The second source-file (Print.c) multiplies i by 2 and prints it.
//Print.c contains the function print() which can be called from main().

#include<stdio.h>

double print(double i)
{
	
	double j;
	j = i*2;
	printf("The value of j is:%lf\n", j);

	return j;
}