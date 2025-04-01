#include <iostream>

void print() {}

template<class T, class... Types>
void print(T first, Types... args)
{
    std::cout << first << std::endl;
    print(args...);
}

int main()
{
    print(5, 6, 7.0, "Hello, World!", 'd');
}
