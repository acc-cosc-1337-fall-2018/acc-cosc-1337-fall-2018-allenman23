//write the dna.h include statement here
#include "dna.h"
#include<iostream>
#include<string>

int main()
{
	//call the dna functions from dna.h and display output
	//Use the function arguments from the test cases in dna_test.cpp
	//Example:
	/*
	auto point_mutation = get_point_mutations("GAGCCTACTAACGGGAT", "CATCGTAATGACGG")
	cout<<point_mutation;
	*/
	std::string dna_example1 = "GAGCCTACTAACGGGAT";
	std::string dna_example2 = "CATCGTAATGACGG";
	std::cout << "  dna example1: " << dna_example1 << "\n";
	std::cout << "  dna example2: " << dna_example2 << "\n";
	auto point_mutation = get_point_mutations(dna_example1, dna_example2);
	std::cout << "Point mutation: " << point_mutation << "\n\n";

	dna_example2 = "GAGCCTACTAACGGGAT";
	std::cout << "  dna example1: " << dna_example1 << "\n";
	std::cout << "  dna example2: " << dna_example2 << "\n";
	point_mutation = get_point_mutations(dna_example1, dna_example2);
	std::cout << "Point mutation: " << point_mutation << "\n\n";

	dna_example2 = "GATCGTAATGACGGCAT";
	std::cout << "  dna example1: " << dna_example1 << "\n";
	std::cout << "  dna example2: " << dna_example2 << "\n";
	point_mutation = get_point_mutations(dna_example1, dna_example2);
	std::cout << "Point mutation: " << point_mutation << "\n\n";

	dna_example2 = "CATCGTAATGACGGCCT";
	std::cout << "  dna example1: " << dna_example1 << "\n";
	std::cout << "  dna example2: " << dna_example2 << "\n";
	point_mutation = get_point_mutations(dna_example1, dna_example2);
	std::cout << "Point mutation: " << point_mutation << "\n\n";

	std::string dna_example3 = "AAAACCCGGT";
	std::cout << "dna example3: " << dna_example3 << "\n";
	std::cout << "  complement: " << get_dna_complement(dna_example3) << "\n\n";

	dna_example3 = "CCCGGAAAAT";
	std::cout << "dna example3: " << dna_example3 << "\n";
	std::cout << "  complement: " << get_dna_complement(dna_example3) << "\n\n";

	std::string dna_example4 = "GATGGAACTTGACTACGTAAATT";
	std::cout << "dna example4: " << dna_example4 << "\n";
	std::cout << "         rna: " << transcribe_dna_into_rna(dna_example4) << "\n\n";

	dna_example4 = "AAATTGATCTTGACTACGTGGAA";
	std::cout << "dna example4: " << dna_example4 << "\n";
	std::cout << "         rna: " << transcribe_dna_into_rna(dna_example4) << "\n\n";

	std::string dna_example5 = "CCACCCTCGTGGTATGGCTAGGCATTCAGGAACCGGAGAACGCTTCAGACCAGCCCGGACTGGGAACCTGCGGGCAGTAGGTGGAAT";
	std::cout << "dna example5: " << dna_example5 << "\n";
	std::cout << "  GC content: " << get_gc_content(dna_example5) << "\n";
	return 0;
}