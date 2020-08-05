//LEVEL 2
//1.7 - Pointers and Arrays​
//Exercise 4
//A C-program that has a function DayName()which can print the day of a given day-number. 
//For example:1 gives: Day 1 is a Sunday, 7 gives: Day 7 is a Saturday.
//The day-name (1-7) should be written "hard-coded” into the program using an array of strings.


#include<stdio.h>

int DayName(int n_day)
{
	/* The two dimensional array */
	char day_names[7][10] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday",	"Saturday" };

	// Print the day name.
	printf("Day %d is %s.\n", n_day, day_names[n_day - 1]);
	return 0;
}


int main()
{
	int n_day;
	int DayName(int n_day);

	printf("Please enter an integer from 1 to 7:\n");		//Let the user enter an integer from 1 to 7.
	scanf_s("%d", &n_day);
	if ((n_day <= 7) && (1 <= n_day))
	{
		DayName(n_day);										//To print the day number and day name.
	}
	else
	{
		printf("This is an error.\n");
	}
	return 0;
}