//1.4 - Flow Control
//Exercise 7
//Extend the program of exercise 6 in such a way that the frequency of number 3 is shown in words.
//E.g.: Number three appears two times.
//Only print the frequency when it is smaller than three. If the frequency is three or larger, then print: "The number three appears more than two times."

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

	printf("Please an integer.\n");
    
	while ((c = getchar()) != 26)
	{
		c;
		switch (c)
		{
		case'0': num_0++;break;
        case'1': num_1++;break;
		case'2': num_2++;break;
		case'3': num_3++; break;
		case'4': num_4++;break;
		default:
			num_other++;break;
         }
	}
	switch (num_3)
	{
	case 0:
		printf("3 appears 0 times.\n");break;
	case 1:
		printf("3 appears 1 time.\n");break;
	case 2:
		printf("3 appears 2 times.\n");break;
	default:
		printf("3 appears more than 2 times.\n");break;
	}
	
	printf("0 has been typed:%d \n", num_0);
	printf("1 has been typed:%d \n", num_1);
	printf("2 has been typed:%d \n", num_2);
	printf("4 has been typed:%d \n", num_4);
	printf("Other numbers have been typed:%d \n", num_other);

}