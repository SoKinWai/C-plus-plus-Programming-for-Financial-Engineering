//Level 2
//1.9 - Input and Output
//Exercise 2
//A C-program that reads the characters from the keyboard and writes them to a file.
//The file to write to must be specified by the user.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char input_char;					//Input a character.
	char str_filename[225];				//The string is to store file name.
	FILE* fp;							//File handles are implemented using a FILE*
	errno_t e;							//To determine whether the file can be opened.
	
	//Let the user enter a file name.
	printf("Please enter a file name,for example:\n filename.txt\n");
    
	//To get the file name.
	gets_s(str_filename);
	
	//a+ is to open file for reading and appending. If the file does not exist, it is created first.
	//Open the file via the specific name.
	e = fopen_s(&fp, str_filename, "a+");
	
	//The file can not be opened, 
	if (e != 0)
	{
		printf("This is an error and the file can not be opened.\n");
		return false;
	}
	
	//Let the user enter some characters.
	printf("Please enter some characters, hit ENTER to show characters to the specific file, use ctrl+shift+A to end.\n");
	
	//If the user does not hit crtl+shift+A, the characters will be kept reading.
	//The value of ^A is 1.
	while ((input_char = getchar()) != 1)
	{
		//Enter the characters of the current line to the file.
		fputc(input_char, fp);
    }
	
	//Close the file.
	fclose(fp);
	
	//If the user hits crtl+shift+A, then press "enter".
	if (input_char ==1)
	{
		//When ^A is entered,the program ends.
		//Then the following message will appear on screen: ¡°CTRL + A is a correct ending.¡±
		printf("CTRL+A+Shift is a correct ending.\n");
	}
    return 0;
}
