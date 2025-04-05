#include <iostream>

enum class Apple: uint32_t {};
enum class Orange: uint32_t {};

int main()
{
	Apple a { 10 };
	Orange b { 20 };
	std::cout << (a < b) << std::endl;
}
