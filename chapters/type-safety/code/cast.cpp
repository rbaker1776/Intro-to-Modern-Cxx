#include <iostream>

class Base
{
	virtual void foo() {}
};

class Derived: public Base {};

int main()
{
	int x { 10 };
	double d { static_cast<double>(x) };
	std::cout << d << std::endl;

	Base* base = new Derived();
	Derived* der = dynamic_cast<Derived*>(base);

	const int y { 20 };
	int* non_const { const_cast<int*>(&y) };
	++(*non_const);
	std::cout << non_const << std::endl;
	std::cout << &y << std::endl;
	std::cout << y << std::endl;
	std::cout << *non_const << std::endl;

	int* ptr { new int(30) };
	unsigned long long address { reinterpret_cast<unsigned long long>(ptr) };
}
