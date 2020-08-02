//1.4 - Flow Control
//Exercise 6
//Create a C-program that counts how many times each of the numbers 0-4 have been typed.
//Use a switch-case construction. Use default to count the number of other characters. 
//The input will be halted with ^Z (EOF). EOF means End-of-File and is defined in <stdio.h>. 
//Thus, the constant EOF can be used in a condition (test if EOF has been typed).
//Print the amount of times a certain number has been typed.
//Name the program freq.c

#include<stdio.h>

void main()
{
	int c;
	int num_0 = 0;
	int num_1 = 0;
	int num_2 = 0;
    int num_3 = 0;
	int num_4 = 0;
	int num_other = 0;
    
	printf("Please enter an integer.\n");
	
	while ((c=getchar())!=26)
	{
		c;
		switch (c)
		{
		case'0': num_0++;break;
	    case'1': num_1++;break;
		case'2': num_2++;break;
		case'3': num_3++;break;
		case'4': num_4++;break;
        default:
			num_other++;break;
        }
}
    printf("0 has been typed:%d \n", num_0);
	printf("1 has been typed:%d \n", num_1);
	printf("2 has been typed:%d \n", num_2);
	printf("3 has been typed:%d \n", num_3);
	printf("4 has been typed:%d \n", num_4);
	printf("Other numbers have been typed:%d \n", num_other);
}