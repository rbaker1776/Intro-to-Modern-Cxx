#include <iostream>

int main()
{
	short* p { nullptr }; // sizeof(short) == 2

	std::cout << p << ',';
	p += 4;
	std::cout << p << ',';
	p -= 3;
	std::cout << p << std::endl;
}
