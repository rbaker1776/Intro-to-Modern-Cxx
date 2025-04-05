#include <iostream>

int main()
{
	int x { 400 };
	double d { *(double*)(&x) };
	std::cout << d << std::endl;
}
