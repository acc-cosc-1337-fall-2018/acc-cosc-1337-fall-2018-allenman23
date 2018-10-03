#ifndef INVOICE_H
#define INVOICE_H

#include"invoice_detail.h"
#include<vector>

using std::vector;

class Invoice
{
	public:
		void add_invoice_detail(Invoice_Detail detail);
		double get_total() const;

	private:
		vector<Invoice_Detail> invoice_details;

};


#endif // INVOICE_DETAIL_H