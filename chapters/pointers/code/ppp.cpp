#include <iostream>

int main()
{
	int* ptr { nullptr };
	std::cout << ptr++ << ',' << ptr++ << ',' << ptr << '\n';
}
