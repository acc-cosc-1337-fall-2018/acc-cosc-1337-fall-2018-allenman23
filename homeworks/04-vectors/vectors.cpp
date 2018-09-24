#include "vectors.h"

int get_max_from_vector(vector<int>& numbers)
{
	//write your code here
	int max = numbers[0];
	for (auto i : numbers)
	{
		if (i > max)
			max = i;
	}
	return max;
}


//write the code for sum_of_squares function here
int sum_of_squares(vector<int>& numbers)
{
	int sum = 0;
	for (auto i : numbers)
	{
		sum += i*i;
	}
	return sum;
}



//write the code for function replace here
void replace(vector<string>& strings, const string& old, const string& new_val)
{
	//write code here. 
	//Remember passing by reference without keyword const makes the string vector
	//read/write meaning you can modify strings in the vector
	//Also there is no need to return the strings vector because a reference
	//points to a previously declared vector of strings variable(see test case 
	//in vectors_test.cp)
	for (int i = 0; i < strings.size(); ++i)
		if (strings[i] == old)
			strings[i] = new_val;
}

//write is_prime function code here
bool is_prime(int num)
{
	int numfactor = 0;
	for (int i = 1; i <= num; ++i)
		if (num % i == 0)
			++numfactor;
	if (numfactor == 2)
		return true;
	else
		return false;
}

//write vector_of_primes function code here
vector<int> vector_of_primes(int number)
{
	vector<int> primes;
	for (int i = 1; i <= number; ++i)
		if (is_prime(i))
			primes.push_back(i);
	return primes;
}
