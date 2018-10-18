#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "midterm.h"


TEST_CASE("Test get_acgt")
{
	REQUIRE(get_acgt("AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAAAAGAGTGTCTGATAGCAGC") == std::vector<int>{20, 12, 17, 21});
}

TEST_CASE("Test for total amount of Receipt")
{
	Receipt test_receipt(10);
	REQUIRE(test_receipt.get_total() == 13);
}

TEST_CASE("Test the overloaded += operator")
{
	Receipt test1(10), test2(10);
	test1 += test2;
	REQUIRE(test1.get_total() == 26);

}