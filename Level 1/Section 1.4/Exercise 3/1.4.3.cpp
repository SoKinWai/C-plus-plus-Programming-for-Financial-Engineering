//1.4 - Flow Control​
//Exercise 3
//Do exercise 1 again, but change your solution so that the switch-case statement is used instead of the if blocks.

#include<stdio.h>

int main()
{   
	int c;
	int pre_c = ' ';
	int chars=0;
	int words=1;
	int lines=1;

	printf("Please enter a text input from the keyboard:\n");

    while ((c = getchar()) != 4)
	{
		chars++;
		switch(c)
		{
		case '\n':
			lines++;
		case'\t':
		case' ':if ((pre_c != ' ') && (pre_c != '\n') && (pre_c != '\t'))

			words++;
		   break;
		
		}
		pre_c = c;
    }
	
	printf("Number of Characters: %d\n", chars);
	printf("Number of newlines:%d\n", lines);
	printf("Number of words:%d\n", words);
}

