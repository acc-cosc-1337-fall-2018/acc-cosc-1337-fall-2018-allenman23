﻿#include <iostream>
int sum_numbers(int num1, int num2);

//write function prototype for multiply_numbers with two integer parameters
int multiply_numbers(int num1, int num2);

void pass_by_val_by_ref(int val, int& ref);

void const_pass_by_val_by_ref(int val, const int& ref);

void pass_by_pointer(int* ptr);

void initialize_vector_of_ints();

void initialize_vector_of_strings();

#ifndef MY_CLASS_H
#define MY_CLASS_H

class DynamicPtr
{
public:
	DynamicPtr();
	~DynamicPtr();
private:
	int* ptr_num;
};

class MyClass
{
public:
	MyClass();
	MyClass(MyClass& my_class);//copy constructor
	void set_ptr_num(int val);
	MyClass& operator=(MyClass other);//overloaded =
	~MyClass();//destructor

private:
	int num{ 5 };
	int* ptr_num = new int(10);
};
#endif // !MY_CLASS_H