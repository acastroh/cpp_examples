/*
 * Author: Alberto Cahdez
 * Created: Jan 17, 2022
 * Updated: Jan 17, 2022
 * Program: 016-class
 * Description: Create a class that represents a table. The diagram below describe the attributes.

| Table class |
|---|
|-height: float|
|-width: float|
|-length: float|
|color: string|
|+setHeight(float h) : void|
|+setWidth(float w) : void|
|+setLength(float l) : void|
|+setColor(string c) : void|
|+getHeight() const : float|
|+getWidth() const : float|
|+getLength() const : float|
|+getColor() const : string|

 * The table attributes have an inline initialization of 10, 20, 20, black; respectively to height, width, length, and color.

 * Business rules

 * Height can only be greater than 9, and less than 40. Any other value in setHeigth is ignored.
 * Width can only be greater than 19, and less than 60. Any other value in setWidth is ignored.
 * Length can only be greater than 19, and less than 80. Any other value in setLength is ignored.
 * Color can only be 'black' and 'brown'. Any other value in setColor is ignored.

 * Program

 * Create a program that creates a table object. Display its information.
 * Read new height, width, length, and color of the table from user input. Update that information in the table object, and display its information.
*/

#include <iostream>
#include "Table.h"

using namespace std;

int main()
{
    Table t;
    float h, w, l;
    string c;

    cout << "Class!\n";
    cout << "--------\n";
    cout << "Default's table information.\n";
    cout << "Height: " << t.getHeight() << endl;
    cout << "Width: " << t.getWidth() << endl;
    cout << "Length: " << t.getLength() << endl;
    cout << "Color: " << t.getColor() << endl;
    cout << "------------------------------------\n";
    cout << "Enter table's new information.\n";
    cout << "Height: ";
    cin >> h;
    cout << "Width: ";
    cin >> w;
    cout << "Length: ";
    cin >> l;
    cout << "Color: ";
    cin >> c;
    t.setHeight(h);
    t.setWidth(w);
    t.setLength(l);
    t.setColor(c);
    cout << "------------------------------------\n";
    cout << "Default's table information.\n";
    cout << "Height: " << t.getHeight() << endl;
    cout << "Width: " << t.getWidth() << endl;
    cout << "Length: " << t.getLength() << endl;
    cout << "Color: " << t.getColor() << endl;
}
