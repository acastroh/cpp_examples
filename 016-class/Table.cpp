#include "Table.h"

void Table::setHeight(float h) {
	if (h > 9 && h < 40)
		height = h;
}
void Table::setWidth(float w) {
	if (w > 19 && w < 60)
		width = w;
}
void Table::setLength(float l) {
	if (l > 19 && l < 80)
		length = l;
}
void Table::setColor(string c) {
	if (c == "black" || c == "brown")
		color = c;
}
float Table::getHeight() const {
	return height;
}
float Table::getWidth() const {
	return width;
}
float Table::getLength() const {
	return length;
}
string Table::getColor() const {
	return color;
}