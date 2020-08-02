//1.4 - Flow Control​
//Exercise 4
//Create a C-program that prints two columns on the screen with the temperature in degrees Celsius in the left column and degrees Fahrenheit in the right column.
//Start with 0 degrees Celsius and proceed until 19 degrees Celsius. 
//Take steps of 1 degree. Print degrees Fahrenheit with 1 position after the comma. Also print a header text.
//The result must be obtained using a for construction!
//Celsius = (5/9) * (Fahrenheit ¨C 32)
//Fahrenheit = (9.0/5.0) * celsius + 32.0

#include<stdio.h>

void main()
{
	double Celsius;
	double Fahrenheit;
	int lower = 0;				/*Lower is the start temperature for  Celsius. */
	int upper = 19;				/*Upper is the end temperature for  Celsius.*/
	int step = 1;				/*Step is the size for each Celsius to increase.*/

	printf("Celsius		Fahrenheit\n\n");


	Celsius = lower;

	for (Fahrenheit = (9.0 / 5.0) * Celsius + 32.0;Celsius <= upper;Celsius = Celsius + step)
	{
		
		printf("%10.1f, %10.1f\n", Celsius, Fahrenheit);

	}

}