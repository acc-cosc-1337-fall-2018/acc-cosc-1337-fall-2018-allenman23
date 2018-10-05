//#include "invoice_detail.h"
#include "invoice.h"
#include<iostream>

int main()
{/*
	Invoice_Detail invoice_ex1(10, 10);
	invoice_ex1.get_extended_cost();
	std::cout << "Created a class for Invoice Detail\nCreated an instance: invoice_ex1\ninvoice_ex1.get_extended_cost(): "
		<< invoice_ex1.get_extended_cost();
*/
	Invoice invoice1;
	Invoice_Detail detail;
	std::cin >> detail;
	invoice1.add_invoice_detail(detail);
	invoice1.add_invoice_detail(Invoice_Detail(5, 5));
	invoice1.add_invoice_detail(Invoice_Detail(100, 2));

	Invoice invoice2;
	invoice2.add_invoice_detail(Invoice_Detail(100, 2));

	Invoice result = invoice1 + invoice2;

	std::cout << "invoice total: " << result.get_total();

	return 0;
}