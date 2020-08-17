//3.5 - Polymorphism​
//Exercise 4: Abstract Functions
//Create the Draw() function in the Shape base class and override it in the derived classes (point, line and if present the circle class). Simulate drawing by just printing some text.
//Give the Draw() function in Shape
//Test program

#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Shape.hpp"
#include<iostream>
#include<string>
using namespace std;

void main()
{
	Shape* shapes[4];

	
	shapes[0] = new Line;
	shapes[1] = new Point;
	shapes[2] = new Circle;
	shapes[3]= new Line(Point(1.0, 2.5), Point(3.4, 5.2));
	//shapes[3]=new Shape;         Not possible to create an instance of the Shape class   


	for (int i = 0; i !=4 ; i++) shapes[i]->Draw();
	for (int i = 0; i != 4; i++) delete shapes[i];





}