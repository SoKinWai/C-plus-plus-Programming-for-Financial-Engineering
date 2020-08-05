//Level 2
//1.7 - Pointers and Arrays​
//Exercise 1
// To create a function Swap(). 
//This function must exchange the value of two variables. 
//For example: if i=123 and j=456, then i=456 and j=123 after the Swap() function has been called. 
//The variables i and j are declared, initialised and printed in the function main(). 
//This problem can be solved by using pointers as arguments for the Swap()function.

#include<stdio.h>

void Swap(double*pi, double*pj)
{    
	double temp;

	temp = (*pi);
	(*pi) = (*pj);
	(*pj) = temp;
}

int main()
{
	double i;
	double j;

	void Swap(double*pi, double*pj);														/*pi points to the first number and pj points to the second number.*/
	printf("Please enter two numbers for i and j(please add a , between i and j):\n");		//Let the user enter two variables.
	scanf_s("%lf,%lf", &i, &j);
	printf("i and j are:%lf,%lf\n", i, j);
	Swap(&i, &j);																			/*Swap i and j*/
	printf("If we swap i and j, then i and j are:%lf,%lf\n", i, j);
	return 0;

}