#include "Circle.h"

void Circle::setRadius(float r) {
	if (r >= 0) {
		radius = r;
		calculatePerimeter();
		calculateArea();
	}
}
float Circle::getRadius() const {
	return radius;
}
int Circle::getRadiusInt() const {
	return (int)radius;
}
void Circle::calculatePerimeter() {
	perimeter = 3.141519 * radius * 2;
}
float Circle::getPerimeter() const {
	return perimeter;
}
void Circle::calculateArea() {
	area = 3.14159 * radius * radius;
}
float Circle::getArea() const {
	return area;
}
Circle::Circle(float r) {
	if (r < 0)
		r = 0;
	setRadius(r);
}
Circle::~Circle() {
	cout << "A circle object has been removed from memory.\n";
}