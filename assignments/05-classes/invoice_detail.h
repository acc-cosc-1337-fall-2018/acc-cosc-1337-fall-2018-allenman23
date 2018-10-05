#ifndef INVOICE_DETAIL_H
#define INVOICE_DETAIL_H
#include<iostream>

class Invoice_Detail
{
public:
	Invoice_Detail() = default;
	Invoice_Detail(double c, int u) : cost(c), units(u) {}
	double get_extended_cost();
	friend std::istream & operator >>(std::istream& in, Invoice_Detail& d);

private:
	double cost;
	int units;
};


#endif // INVOICE_DETAIL_H
