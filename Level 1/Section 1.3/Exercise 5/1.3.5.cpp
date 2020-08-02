//1.3 - Variables, Operators and Expressions​
//Exercise 5
//Create a C-program that clearly shows the difference between --i and i--.

# include <stdio.h>

int main()
{
	int i=10;         
	int j = 10;
	int a;
	int b;
	
	a = i--;
	
	printf("value of a:%d",a);      /*Equivalent code: a=i; a equals 10.*/
	printf("\nvalue of i:%d", i);     /*Equivalent code:i=i-1;i equals 9.*/

	b = --j;
	printf("\nvalue of b:%d", b);      /*Equivalent code:b=j-1;b equals 9.*/
	printf("\nvalue of j:%d", j);       /*Equivalent code:j=j-1;j equals 9.*/
	
	return 0;
}