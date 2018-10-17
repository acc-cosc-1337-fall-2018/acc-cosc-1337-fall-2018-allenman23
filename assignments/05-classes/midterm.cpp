#include "midterm.h"

std::vector<int> get_acgt(std::string dna)
{
	std::vector<int> acgt{ 0,0,0,0 };
	for (auto i : dna)
	{
		switch(i)
		{
			case 'A':
				++acgt[0];
				break;
			case 'C':
				++acgt[1];
				break;
			case 'G':
				++acgt[2];
				break;
			case 'T':
				++acgt[3];
				break;
		}

	}
	return acgt;
}

void get_grades(std::vector<int> grades)
{
	int a{ 0 }, b{ 0 }, c{ 0 }, d{ 0 }, f{ 0 };
	for (auto i : grades)
	{
		if (i >= 90 && i <= 100)
			++a;
		else if (i >= 80 && i <= 89)
			++b;
		else if (i >= 70 && i <= 79)
			++c;
		else if (i >= 60 && i <= 69)
			++d;
		else if (i >= 0 && i <= 59)
			++f;
	}
	std::cout << "A: " << a << "\nB: " << b << "\nC: " << c << "\nD: " << d << "\nF: " << f << "\n";
}

std::istream & operator>>(std::istream& in, Receipt& d)
{
	std::cout << "Enter Bill Amount: $";
	in >> d.bill;
	d.tip = d.bill / 5;
	d.tax = d.bill / 10;
	d.total = d.bill + d.tip + d.tax;
	return in;
}

std::ostream & operator<<(std::ostream& out, const Receipt& d)
{
	out << " Bill Amount: $" << d.bill << "\n";
	out << "  Tip Amount: $" << d.tip << "\n";
	out << "  Tax Amount: $" << d.tax << "\n";
	out << "Total Amount: $" << d.total << "\n";
	return out;
}

Receipt Receipt::operator+=(const Receipt & d)
{
	bill += d.bill;
	tip += d.tip;
	tax += d.tax;
	total += d.total;
	return Receipt();
}

void reverse_string_by_reference(std::string & str_by_reference)
{
	std::string temp;
	for (int i = str_by_reference.length() - 1; i >= 0; i--)
		temp.push_back(str_by_reference[i]);
	str_by_reference = temp;
}

std::string reverse_string_by_value(std::string str_by_value)
{
	std::string temp;
	for (int i = str_by_value.length() - 1; i >= 0; i--)
		temp.push_back(str_by_value[i]);
	return temp;
}
