#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "invoice_detail.h"

TEST_CASE("Test cases for get extended cost")
{
	Invoice_Detail invoice_example1(10, 10);
	REQUIRE(invoice_example1.get_extended_cost() == 100);
}
