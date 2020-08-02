//1.3 - Variables, Operators and Expressions​
//Exercise 2
//Write a program that calculates the surface of a triangle with one 90 degree angle. 
//The formula is half the height multiplied by the base.
//The program should take an input from the user (base & height), and output the result.


#include <stdio.h>

void main() 
{
	double base;         /*Base is the base of the right triangle.*/
	double height;       /*Height is the height of the right triangle.*/
 	double surface;           /*Surface is the area of the right triangle.*/
    
	printf("Input base and height of the right triangle:\n");
	
	scanf_s("%lf,%lf", &base, &height);  /*Please put a "," between base and height.*/
	
	surface = 0.5*base*height;			/*The formula is half the height multiplied by the base.*/

	printf("Surface of the right triangleis: %f\n", surface);

}