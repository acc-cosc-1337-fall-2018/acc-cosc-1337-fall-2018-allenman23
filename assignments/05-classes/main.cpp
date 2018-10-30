#include<iostream>
#include "invoice.h"
#include"invoice_utility.h"
#include"invoice_progress.h"
#include <memory>

class Shape
{
public:
	virtual void draw() { std::cout << "Shape\n"; }
};

class Line : public Shape
{
public:
	void draw() { std::cout << "Line\n"; }
};

class Circle : public Shape
{
public:
	void draw() { std::cout << "Circle\n"; }

};

int main()
{
	//	std::unique_ptr<Shape> line = std::make_unique<Line>();
	//	line->draw();
	std::vector<std::unique_ptr<Shape>> shapes;
	shapes.push_back(std::make_unique<Line>());
	shapes.push_back(std::make_unique<Circle>());

	for (auto& shape : shapes)
	{
		shape->draw();
	}

	return 0;
}