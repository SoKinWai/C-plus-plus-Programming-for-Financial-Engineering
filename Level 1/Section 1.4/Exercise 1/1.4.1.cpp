//1.4 - Flow Control​
//Exercise 1
//Write a C-program that asks for text input from the keyboard. 
//The output of this program should be the amount of characters, the amount of words and the amount of lines that have been typed. 
//Multiple consecutive spaces should not be counted as multiple words.
//Reading keys from the keyboard is possible by using the function getchar(). 
//The reading of characters from the keyboard can be stopped when the shutdown-code ^D (CTRL + D) is entered.
//^D has the ASCII-value 4.
//Use a while loop.

#include <stdio.h>

void main()
{
	int c;
	int num_chars = 0;
	int num_words = 1;
	int num_lines = 1;
	int pre_c = ' ';

	printf("Please enter a text input from the keyboard:\n");
	
	while ((c = getchar()) != 4)
	{
		num_chars++;

		if (c == '\n')
		{
			num_lines++;
		}
		
		//Multiple consecutive spaces should not be counted as multiple words.
		if ((c == ' ' || c == '\t' || c == '\n') && (pre_c != ' ') && (pre_c != '\t') && (pre_c != '\n'))
		{
			num_words++;
		}
		pre_c = c;

	}
	printf("Number of characters: %d\n", num_chars);
	printf("Number of newlines:%d\n", num_lines);
	printf("Number of words:%d\n", num_words);

}