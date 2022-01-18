#pragma once
#include <string>

using namespace std;

class Table {
private:
	float height=10;
	float width=20;
	float length=20;
	string color="black";
public:
	void setHeight(float h);
	void setWidth(float w);
	void setLength(float l);
	void setColor(string c);
	float getHeight() const;
	float getWidth() const;
	float getLength() const;
	string getColor() const;
};