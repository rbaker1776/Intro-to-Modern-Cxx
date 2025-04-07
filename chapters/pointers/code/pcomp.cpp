#include <iostream>

int main()
{
	int* p1 { nullptr }; 
	int* p2 { p1 + 1 };

	if (p1 < p2)
		std::cout << "p1 points to a lower address\n";
	else if (p1 == p2)
		std::cout << "p1 and p2 point to the same address\n";
	else
		std::cout << "p1 points to a higher address\n";
}
