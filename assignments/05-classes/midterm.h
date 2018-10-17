#include<iostream>
#include<vector>
#include<string>

std::vector<int> get_acgt(std::string dna);

void get_grades(std::vector<int> grades);

class Receipt
{
	public:
		Receipt() = default;
		Receipt(double b) : bill(b) {}
		friend std::istream& operator >>(std::istream& in, Receipt& d);
		friend std::ostream& operator <<(std::ostream& out, const Receipt& d);
		Receipt operator+=(const Receipt& d);
		double get_total() { return total; }
	private:
		double bill{ 0 };
	    double tip{ bill / 5};
		double tax{ bill / 10};
		double total{ bill + tip + tax };
};

class Shape
{
	public:
		virtual void draw() { std::cout << "Draw Shape\n"; }
};

class Line : public Shape
{
	public:
		void draw() { std::cout << "Draw Line\n"; }
};

class Circle : public Shape
{
public:
	void draw() { std::cout << "Draw Circle\n"; }
};

void reverse_string_by_reference(std::string& str_by_reference);

std::string reverse_string_by_value(std::string str_by_value);
