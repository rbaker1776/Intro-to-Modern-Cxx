#include <iostream>

#define SQUARE(x) x * x

int main()
{
	std::cout << SQUARE(3 + 3) << std::endl;
    std::cout << 3 + 3 * 3 + 3 << std::endl;
}
