#include "basics.h"

int sum_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write code for multiply_numbers function here
int multiply_numbers(int num1, int num2)
{
	return num1 * num2;
}

void pass_by_val_by_ref(int val, int& ref)
{
	val = 99;
	ref = 99;
}

void const_pass_by_val_by_ref(int val, const int & ref)
{
	val = 99;
	//ref = 99; ref can't be modified
}

void pass_by_pointer(int * ptr)
{
	//ptr: we're using the address
	*ptr = 99;//*ptr: get the fvalue of the address pointed to
}

void initialize_vector_of_ints()
{
}

void initialize_vector_of_strings()
{
}

MyClass::MyClass()
{
	std::cout << "Constructor...\n";
}

MyClass::MyClass(MyClass & my_class)
{
	ptr_num = new int(*my_class.ptr_num);
}

void MyClass::set_ptr_num(int val)
{
	*ptr_num = val;
}

MyClass & MyClass::operator=(MyClass other)
{
	delete other.ptr_num;
	ptr_num = new int(*other.ptr_num);
	return *this;
}

MyClass::~MyClass()
{
	std::cout << "Num: " <<num << "\nPtr num: " << *ptr_num << "\nAddress at Ptr num: " << ptr_num << "\nDestructor...\n";
}

DynamicPtr::DynamicPtr()
{
	std::cout << "DynamicPtr Constructor runs\n";
}

DynamicPtr::~DynamicPtr()
{
	std::cout << "DynamicPtr Destructor runs\n";
}
