//1.3 - Variables, Operators and Expressions​
//Exercise 6
//Write a C-program that shifts any number two places to the right. Input should be an integer.
//Output should be the shifted result, as well as output an indication of whether a logical or arithmetic shift is performed (if a 1 or 0 is shifted in at the left side) for the inputted number.

#include<stdio.h>

void main()
{
	/*A C-program that shifts any number two places to the right.*/

	int input;    /*Input should be an integer.*/
	int shifted; /*Shifted will be the shifted number.*/

	printf("Input an integer:");
	
	scanf_s("%d", &input);

	shifted = input >> 2;

	printf("An integer shifts two places to the right:%d\n", shifted);

	if (input < 0)
	{
		printf("Negative integer was inserted\n");

		if (shifted < 0)
		{
			printf("Arithmetic right shift was performed.\n");
		}
		else {
			printf("Logical right shift was performed.\n");
		}
		}
	

	else
	{
		printf("Non-negative integer was inserted,Arithmetic right shift was performed,\n");
	}

}