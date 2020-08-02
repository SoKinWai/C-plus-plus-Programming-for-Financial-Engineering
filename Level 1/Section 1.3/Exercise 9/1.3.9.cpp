//1.3 - Variables, Operators and Expressions
//Exercise 9
//Predict what the following program prints on screen (provide a code file with comments stating the output for each line).

/* Conditional expressions */
#include <stdio.h>

int main()
{
	int x = 1;
	int y = 1;
	int z = 1;

	x += y += x;							/*x+=(y+=x), so y+=x is y=y+x=2 and x=x+y=3*/
	printf("%d\n\n", (x<y) ? y : x);		// Number 1 :the result would be  3, because x=3 and y=2, x<y is not true, then the result would be assigned 'x' and x=3
	//printf("%d\n", (x < y) ? y++ : x++);	// 3
	printf("%d\n", (x<y) ? x++ : y++);		// Number 2 :the result would be 2, because x=3 and y=2, x<y is not true, then the result would be assigned 'y++" and y++ is 2
	printf("%d\n", x);						// Number 3 : the result would be 3, because from the previous parts, we can know x=3
	printf("%d\n", y);						// Number 4: the result would be 3, because from the previous parts, we can know y=3

	return 0;
}