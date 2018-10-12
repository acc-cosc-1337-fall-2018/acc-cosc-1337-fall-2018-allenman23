//#include "invoice_detail.h"
#include "invoice.h"
#include<iostream>
#include"invoice_utility.h"
#include"invoice_progress.h"

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
	Invoice_Utility invu(25);
	invu.add_invoice_detail(Invoice_Detail(100, 1));
	Invoice_Progress invp(250);
	invp.add_invoice_detail(Invoice_Detail(100, 1));

	std::cout << invu.get_total() << "\n";
	std::cout << invp.get_total() << "\n";

	Invoice& u = invu;
	Invoice& p = invp;

	std::cout << u.get_total() << "\n";
	std::cout << p.get_total() << "\n";

	return 0;
}