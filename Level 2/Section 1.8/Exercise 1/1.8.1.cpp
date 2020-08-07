//Level 2
//1.8 - Structures​
//Exercise 1
//A C-program that prints the contents of a struct called Article.
//An Article has the following characteristics:​ Article number,Quantity and Description(20 characters).
//The test program must create an Article of which the contents are assigned at initialization level.​
//Printing the Article is done with a Print() function. This function gets the address of the structure as a parameter.​
//Suppose that p is the pointer to the structure. It will allow the fields to be printed by (*p).fieldname or p->fieldname.​

#include<stdio.h>

struct Article
{
	double number;				/*Article number.*/
	double quantity;			/*Quantity.*/
	char description[21];		/*Description(20 characters).*/
};

//p is a pointer to the "article" of the Article structure.
//Print the contents of "article".
int Print(struct Article* p)
{
	printf("Article number:%lf\n", (*p).number);
	printf("Quantity:%lf\n", (*p).quantity);
	printf("Description:%s\n", (*p).description);
	return 0;
}

int main()
{
	//Assign the initialization level.
	struct Article article= {1,7,"This is the article." };			/*Give an example of the Article structure.*/

	//Print the contents of article.
	Print(&article);
	return 0;
}
