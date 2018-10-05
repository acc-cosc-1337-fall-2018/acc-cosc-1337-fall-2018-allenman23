#include "invoice_detail.h"

double Invoice_Detail::get_extended_cost()
{
	return cost*units;
}

std::istream & operator >>(std::istream& in, Invoice_Detail& d)
{
	std::cout << "Enter cost: ";
	in >> d.cost;
	std::cout << "Enter units: ";
	in >> d.units;
	return in;

}
