#include <iostream>

int main()
{
	int x { 42 };
	int* ptr { &x };
	(*ptr)++;
	std::cout << "x = " << x << std::endl;
}
