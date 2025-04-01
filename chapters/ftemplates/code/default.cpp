#include <iostream>

template<class T = double>
T max(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    std::cout << typeid(max(4, 5)).name() << std::endl;
}
