//1.5 - Functions and Scope of Variables​
//Exercise 4
//Write a recursive function printnumber() which gets the number to be printed. 
//This number is an integer. The function should print the number digit by digit by using the putchar() function. 
//Don’t use printf().
//Tips: Use the modulo operator (%) to determine the digit to print. 
//Use the division operator (/) to calculate the argument for the recursive call. 
//Don’t forget to handle negative numbers correctly.


#include<stdio.h>

int printnumber(int i)
{
	if (i < 0)
	{
		putchar('-');
		i = -i;
	}
	
	if ((i / 10) > 0)
	{
		printnumber(i / 10);
	}
	
	return putchar(i % 10 + '0');
}

void main()
{
	
	int i;
	
	scanf_s("%d", &i);	 /*Please input an integer.*/
	
	printnumber(i);
	
}