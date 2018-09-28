#include "invoice_detail.h"

double Invoice_Detail::get_extended_cost()
{
	return cost*units;
}
