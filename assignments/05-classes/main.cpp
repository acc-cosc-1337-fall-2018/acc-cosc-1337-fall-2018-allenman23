#include "invoice_detail.h"
#include<iostream>

int main()
{
	Invoice_Detail invoice_ex1(10, 10);
	invoice_ex1.get_extended_cost();
	std::cout << "Created a class for Invoice Detail\nCreated an instance: invoice_ex1\ninvoice_ex1.get_extended_cost(): "
		<< invoice_ex1.get_extended_cost();

	return 0;
}