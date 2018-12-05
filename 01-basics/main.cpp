#include<iostream>
#include "basics.h"
#include<memory>

using std::cout;

int main()
{
//	cout << sum_numbers(5, 5);
/*	int num = 10;
	pass_by_pointer(&num);
	cout << num;
*/

/*	MyClass c;
	MyClass a = c;
	a.set_ptr_num(1000);
*/
/*
	MyClass* ptr_class = new MyClass();
	ptr_class->set_ptr_num(50);
	delete ptr_class;
	ptr_class = nullptr;
*/

/*
	std::unique_ptr<MyClass> ptr_class = std::make_unique<MyClass>();
	ptr_class->set_ptr_num(50);
	MyClass ptr_class2 = *ptr_class;
	ptr_class2.set_ptr_num(100);
	return 0;
*/
	DynamicPtr a;
	DynamicPtr *b = new DynamicPtr();
	std::unique_ptr<DynamicPtr> c = std::make_unique<DynamicPtr>();
	delete b;
	return 0;
}
