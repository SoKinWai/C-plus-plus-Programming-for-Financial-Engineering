//4.2b - Advanced Templates​
//Exercise 1: Static Variable for Array Default Size


#ifndef ArrayException_HPP
#define ArrayException_HPP
#include <iostream>
#include <sstream>
using namespace std;

class ArrayException
{
private:
public:
	ArrayException();															//A default constructor.

	virtual	~ArrayException();													//A destructor. 

	//Give the ArrayException an abstract GetMessage() function that returns a std::string.
	virtual string GetMessage() = 0;
};

#endif
