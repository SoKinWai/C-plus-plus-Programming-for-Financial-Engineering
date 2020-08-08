//Level 2
//1.9 - Input and Output
//Exercise 1
// A C-program that reads the characters from the keyboard and shows them on screen.
//The inputted characters should only be displayed when the user hits 'enter', line by line.
//When ^A is entered, the program must end properly. Then the following message will appear: ¡°CTRL + A is a correct ending.¡±
// getchar() reads and putchar() writes the type int. The value of ^A is 1.

#include <stdio.h>

int main()
{
	char input_char;		//Input characters.
	
	//Let the user enter characters.
	printf("Please enter the characters, hit Enter to show characters line by line and press ctrl+Shift+A to end:\n");
	

	//If the user does not hit crtl+shift+A, the characters will be kept reading.
	//The value of ^A is 1.
	
		while ((input_char=getchar()) != 1)
		{
			//After the user hits "enter", the current will be printed on screen.
			putchar(input_char);
		}

		putchar('\n');
	
	    if (input_char ==1)
		{
			//When ^A is entered,the program ends.
		//Then the following message will appear: CTRL + A+Shift is a correct ending.
			printf("CTRL + A+Shift is a correct ending.\n");
		}
	    return 0;
}

