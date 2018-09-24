//write include statement for vectors header
//write include statement for cout object
#include"vectors.h"
#include<iostream>
//#include<vector>

using std::cout;

//dont forget using statement for cout object
int main() 
{
	//Write code to call get_max_from_vector with argument
	//vector of values 4, 5, 1, 50, 6, 77, 0 and display max
	vector<int> foo{ 4, 5, 1, 50, 6, 77, 0 };
	cout << "max of vector[4,5,1,50,6,77,0]: " << get_max_from_vector(foo) << "\n";

	//write code to call the sum_of_square function with argument
	//vector of values 2, 3, 4 and display result
	foo = { 2,3,4 };
	cout << "sum of squares of vector[2,3,4]: " << sum_of_squares(foo) <<"\n";

	//write code to call the replace function with argument 
	//vector of strings "Joe", "joe", "mary", old argument "joe", new argument "John"
	vector<string> names{ "Joe", "joe", "mary" };
	for (auto s : names)
		cout << s << " ";
	cout << "\n";
	replace(names, "joe", "John");
	for (auto s : names)
		cout << s << " ";
	cout << "\n";
	
	//write code to call is_prime with value 3 output result
	int num1 = 3;
	cout << num1 << " is prime? " << is_prime(num1) << "\n";

	//write code to call vector_of_primes, save return value to a vector of ints
	//output each int in the return vector
	int num2 = 50;
	vector<int> primes = vector_of_primes(num2);
	cout << "Primes from 1 to " << num2 << ": ";
	for (auto i : primes)
		cout << i << " ";
	cout << "\n";

	return 0;
}