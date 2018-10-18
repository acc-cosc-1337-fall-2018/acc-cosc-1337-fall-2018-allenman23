#include<iostream>
#include"midterm.h"

int main()
{
	std::vector<int> dna_example;
	dna_example = get_acgt("AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAAAAGAGTGTCTGATAGCAGC");
	for (auto i : dna_example)
		std::cout << i << "\n";

	std::vector<int> many_grades{ 60, 75, 77, 88, 90, 50, 100, 65, 71, 5, 95, 77, 80, 89, 97, 94, 76, 30, 85, 78};
	get_grades(many_grades);

	Receipt rec1;
	std::vector<Receipt> receipts;
	Receipt rec2(10), rec3(20), rec4(30);
	receipts.push_back(rec2);
	std::cout << rec2;
	receipts.push_back(rec3);
	std::cout << rec3;
	receipts.push_back(rec4);
	std::cout << rec4;
	Receipt result;
	for (auto i : receipts)
		result += i;
	std::cout << result;

	Line l;
	Shape& shape1 = l;
	shape1.draw();
	Circle c;
	Shape& shape2 = c;
	shape2.draw();
	l.draw();
	c.draw();

	std::string name{ "Allen Lim" };
	std::cout << name << "\n";
	reverse_string_by_reference(name);
	std::cout << name << "\n";
	//string changes because it is passed into the function by reference

	name = "Allen Lim";
	std::cout << name << "\n" << reverse_string_by_value(name) << "\n";
	//the returned value is not the same variable (same address of original string)
	//it is a copy of the original string, reversed, then returned

	//the compiler does not let you alter the string,
	//the "const" allows read only

	//OUTPUT:
	//Draw Line
	//Draw Circle

	//the classes Line and Circle inherit from the base class Shape
	//the virtual operation allows for references of Shape to use Line and Circle functions 
	return 0;
}