//1.3 - Variables, Operators and Expressions​
//Exercise 4
//Create a C-program that uses the fact that 0 (zero) is interpreted as FALSE and non-zero is interpreted as TRUE.
//The C-program can be made easier to read when this 0 (or non-zero) is assigned to a variable e.g. an int called married. 
// Use the ?: operator to print if someone is married or not. (See if you can use a single printf)

# include<stdio.h>

void main()
{
	
	int c;
	
	/*Please enter an integer for C.*/
	scanf_s("%d", &c);   // Assign 0 is false, nonzero is true

	

	printf(c == 0 ? "unmarried\n" : "married\n");

}