//Level 2
//1.6 - The Preprocessor​
//Exercise 2
//Two macros MAX2(x,y) and MAX3(x,y,z)
//Create the two macros MAX2(x,y) and MAX3(x,y,z).
//These macros must return the maximum value of the given arguments. 
//Let the macro MAX3 make use of the macro MAX2.
//Add these macros to the file “Defs.h”.



#ifndef MAX2
#define MAX2(x, y)	((x > y) ? x : y)
#endif

#ifndef MAX3
#define MAX3(x, y, z)	(MAX2(MAX2(x, y), z))
#endif