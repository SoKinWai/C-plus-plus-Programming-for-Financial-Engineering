//1.3 - Variables, Operators and Expressions
//Exercise 7
//Write a C-program that efficiently multiplies a number by a factor 2 to the power n. 
//The number to multiply and n are variables, which get a value at the start of the program. Clue:
//1 shift to the left is the same as multiplying by 2.
//2 shifts to the left are the same as multiplying by 4.
//3 shifts to the left are the same as multiplying by 8.



#include<stdio.h>

void main()
{
	printf("A C-program that efficiently multiplies a number by a factor 2 to the power n. \n");     
	
	int num;
	int power;
	int result;

	printf("Please enter an integer for num and an integer for power. (Please enter a , between num and power):\n");
	
	scanf_s("%d,%d", &num,&power);       /*Power should be a positive integer.*/

	num <<= power;

	result = num;						/*Result= num*2^power */

	printf("The result:%d\n", result);
	
}