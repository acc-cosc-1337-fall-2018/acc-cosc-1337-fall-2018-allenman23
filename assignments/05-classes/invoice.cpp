#include "invoice.h"

void Invoice::add_invoice_detail(Invoice_Detail detail)
{
	invoice_details.push_back(detail);
}

double Invoice::get_total() const
{
	double total = 0;
	for (auto i : invoice_details)
	{
		total += i.get_extended_cost();
	}
	return total;
}
