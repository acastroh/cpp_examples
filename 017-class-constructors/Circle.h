#pragma once
#include <iostream>

using namespace std;

class Circle {
private:
	float radius;
	float perimeter;
	float area;
public:
	void setRadius(float r);
	float getRadius() const;
	int getRadiusInt() const;
	void calculatePerimeter();
	float getPerimeter() const;
	void calculateArea();
	float getArea() const;
	Circle(float r = 0);
	~Circle();
};