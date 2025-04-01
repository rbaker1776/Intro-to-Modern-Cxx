#include <iostream>

#define SQUARE(x) ((x) * (x))

int main()
{
	int i { 5 };
	std::cout << SQUARE(++i) << std::endl;
}
