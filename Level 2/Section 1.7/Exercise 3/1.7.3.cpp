//Level 2
//1.7 - Pointers and Arrays​
//Exercise 3
/* Predict what will be printed on the screen */

#include <stdio.h>

#define PRD(a) printf("%d", (a) ) // Print decimal
#define NL printf("\n"); // Print new line

// Create and initialize array
int a[] = { 0, 1, 2, 3, 4 };

int main()
{
	int i;
	int* p;

	for (i = 0; i <= 4; i++) PRD(a[i]); 							//01234
	NL;

	for (p = &a[0]; p <= &a[4]; p++) PRD(*p); 						//01234
	NL;
	NL;

	/*p[i] is as same as *(p+i).*/
	for (p = &a[0], i = 0; i <= 4; i++) PRD(p[i]);					// 01234
	NL;

	/*p=a means p points to the first element of the array a.*/
	/*a+4 is the memory address of the 5th item in the a array.*/
	for (p = a, i = 0; p + i <= a + 4; p++, i++) PRD(*(p + i));		// 024
	NL;
	NL;

	/*p[0] is the same as *p and p[1] is the same as *(p+1), etc. */
	for (p = a + 4; p >= a; p--) PRD(*p);							// 43210
	NL;

	/*p[-i] is the same as *(p-i)*/
	for (p = a + 4, i = 0; i <= 4; i++) PRD(p[-i]);					// 43210
	NL;

	for (p = a + 4; p >= a; p--) PRD(a[p - a]);						// 43210
	NL;

	return 0;
}