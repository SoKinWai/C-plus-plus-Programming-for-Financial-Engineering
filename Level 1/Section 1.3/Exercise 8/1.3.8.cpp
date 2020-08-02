//1.3 - Variables, Operators and Expressions​
//Exercise 8
//The following program uses assignment-operators. 
//Predict what will be printed on screen (provide a code file with comments stating the output for each line). 
//The operators + and = = have a higher priority than the assignment-operators.
#include <stdio.h>

int main()
{
	int x = 2;
	int y;
	int z;

	x *= 3 + 2;
	printf("x=%d\n", x);    /*x equals 10. x=x*(3+2) */

	x *= y = z = 4;
	printf("x=%d\n", x);   /*x equals 40. x=x*4 */

	x = y == z;
	printf("x=%d\n", x);   /* x equals 1. From previous part, y and z equals 4, so (y==z) is true. Then x equals 1. */
	
	return 0;

}