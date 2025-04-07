#include <iostream>

int main()
{
	int a, b, c, d, e, f;
	int* p1 { &a };
	int* p2 { &f };
	std::cout << (p1 - p2) << std::endl;
}
