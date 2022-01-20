/* Author: Alberto Cahdez
 * Created: Jan 19, 2022
 * Updated: Jan 19, 2022
 * Program: 017-class-constructors
 * Description: Create a class that represents a Circle. The diagram below describe its attributes.

 |Circle|
 |---|
 |-radius: float|
 |-perimeter: float|
 |-area: float|
 |+setRadius(float r): void|
 |+getRadius() const: float|
 |+getRadiusInt() const: int|
 |-calculatePerimeter(): void|
 |+getPerimeter() const: float|
 |-calculateArea(): void|
 |+getArea() const: float|
 |Circle(float r=0)|
 |~Circle()|

 * The Circle class has one constructor that receives the radius as input argument.

 * getRadius, getPerimeter, getArea, and getRadiusInt are accessors. The first three accessors returns the value of the respective variable. getRadiusInt returns the integer part of the radius value.

 * setRadius is a mutator that receives the radius as input argument. Once the radius is updated, it calculates the perimeter and area values.

 * The destructor displays the message "A circle object has been removed from memory.".

## Business Rules

* Circle's radius must be 0 or greater. If setRadius receives a negative value as input, do not change the current radius value. 
 * If the constructor receives a negative value, set the radius to zero.

## Program

 * Create a first circle with a valid initial radius.
 * Create a second cirle without providing an initial radius.
 * Create a third circle with an invalid initial radius.
 * Display the radius, perimeter, and area of the first, second, and third circle.
 * Copy the values from the first circle to the second circle, and display its radius, perimeter, and area.
 * Update the third circle's radius with a valid value, and display its radius, perimeter, and area.
*/

#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
    cout << "Circle!\n";
    cout << "----------\n";

    Circle firstC(10);
    Circle secondC;
    Circle thirdC(-5);
    cout << "Radius\tPerimeter\tArea\n";
    cout << firstC.getRadius() << "\t" << firstC.getPerimeter() << "\t\t" << firstC.getArea() << endl;
    cout << secondC.getRadius() << "\t" << secondC.getPerimeter() << "\t\t" << secondC.getArea() << endl;
    cout << thirdC.getRadius() << "\t" << thirdC.getPerimeter() << "\t\t" << thirdC.getArea() << endl;
    secondC = firstC;
    cout << secondC.getRadius() << "\t" << secondC.getPerimeter() << "\t\t" << secondC.getArea() << endl;
    thirdC.setRadius(5);
    cout << thirdC.getRadius() << "\t" << thirdC.getPerimeter() << "\t\t" << thirdC.getArea() << endl;
}

