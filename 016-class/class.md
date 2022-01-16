# description
Create a class that represents a table. The diagram below describe the attributes.


| Table class |
|---|
|-height: float|
|-width: float|
|-length: float|
|color: string|
|---|

=========================
-setHeight(float h) : void
-setWidth(float w) : void
-setLength(float l) : void
-setColor(string c) : void
-getHeight() : float
-getWidth() : float
-getLength() : float
-getColor() : string
==========================

The table attributes have an inline initialization of 10, 20, 20, black; respectively to height, width, length, and color.

## Business rules

Height can only be greater than 9, and less than 40. Any other value in setHeigth is ignored.
Width can only be greater than 19, and less than 60. Any other value in setWidth is ignored.
Length can only be greater than 19, and less than 80. Any other value in setLength is ignored.
Color can only be 'black' and 'brown'. Any other value in setColor is ignored.

## Program

Create a program that creates a table object. Display its information.
Ask for the new heigh, width, length, and color of the table. Update that information in the table object, and display its information.
 

