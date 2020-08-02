//1.4 - Flow Control​
//Exercise 2
//Rewrite the C-program that was written for exercise 1, but use do while instead of while.


#include<stdio.h>
void main()
{
	printf("Please enter a text input from the keyboard:\n");

	int c;
	c = getchar();
	int pre_c=' ';
	int chars=0;
	int words=1;
	int lines=1;
    
	do 
	{
		chars++;
		if(c=='\n')
		{
			lines++;
		}
		if ((c == '\n' || c == ' '||c=='\t')&&(pre_c!=' ')&&(pre_c!='\t')&&(pre_c!='\n'))
		{
			words++;
		}
		pre_c = c;
	} while ((c = getchar())!= 4);
    
	printf("Number of characters:%d\n", chars); 
	printf("Number of words:%d\n", words);
	printf("Number of lines:%d\n", lines);

}