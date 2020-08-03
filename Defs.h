//Level 2
//1.6 - The Preprocessor​
//Exercise 1
//Defs.h
//Write a C-program that contains two print macro calls.
//The first prints the variable a, the second prints the variables a and b.

//This is the first print.

#ifndef PRINT1
#define PRINT1(a)	printf("a=%d\n",a)
# endif


//This is the second print.
#ifndef PRINT2
#define PRINT2(a,b)	printf("a=%d,b=%d\n",a,b)
#endif