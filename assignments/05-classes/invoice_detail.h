#ifndef INVOICE_DETAIL_H
#define INVOICE_DETAIL_H

class Invoice_Detail
{
public:
	Invoice_Detail(double c, int u) : cost(c), units(u) {}
	double get_extended_cost();

private:
	double cost;
	int units;
};


#endif // INVOICE_DETAIL_H
