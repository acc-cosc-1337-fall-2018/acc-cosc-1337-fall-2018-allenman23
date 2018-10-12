#ifndef INVOICE_H
#define INVOICE_H

#include"invoice_detail.h"
#include<vector>

using std::vector;

class Invoice
{
	public:
		void add_invoice_detail(Invoice_Detail detail);
		virtual double get_total() const;
		friend Invoice operator+(const Invoice& i, const Invoice& i2);

	private:
		vector<Invoice_Detail> invoice_details;
		double total{ 0 };
};


#endif // INVOICE_DETAIL_H