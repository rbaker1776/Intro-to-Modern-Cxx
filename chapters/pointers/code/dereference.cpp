#include <iostream>

int main()
{
	int x { 42 };
	int* ptr { &x };
	std::cout << "x = " << *ptr << std::endl;
}
