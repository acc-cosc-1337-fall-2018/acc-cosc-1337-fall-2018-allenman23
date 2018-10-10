#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//#include "invoice_detail.h"
#include "invoice.h"
#include "invoice_utility.h"

TEST_CASE("Test cases for get extended cost")
{
	Invoice_Detail invoice_example1(10, 10);
	REQUIRE(invoice_example1.get_extended_cost() == 100);
}

TEST_CASE("Test cases for invoice get_total")
{
	Invoice invoice1;
	invoice1.add_invoice_detail(Invoice_Detail(10, 10));
	invoice1.add_invoice_detail(Invoice_Detail(5, 5));
	invoice1.add_invoice_detail(Invoice_Detail(100, 2));
	REQUIRE(invoice1.get_total() == 325);

}

TEST_CASE("Test invoice operator overloading")
{
	Invoice invoice1;
	invoice1.add_invoice_detail(Invoice_Detail(10, 10));
	invoice1.add_invoice_detail(Invoice_Detail(5, 5));
	invoice1.add_invoice_detail(Invoice_Detail(100, 2));

	Invoice invoice2;
	invoice2.add_invoice_detail(Invoice_Detail(100, 2));

	Invoice result = invoice1 + invoice2;
	REQUIRE(result.get_total() == 525);

}

TEST_CASE("Test Invoice Utility get total")
{
	Invoice_Utility inv(25);
	inv.add_invoice_detail(Invoice_Detail(100, 1));
	REQUIRE(inv.get_total() == 125);
}