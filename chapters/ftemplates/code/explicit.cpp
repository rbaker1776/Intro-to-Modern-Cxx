#include <iostream>

template<class T>
T max(T a, T b) { return (a > b ? a : b); }

int main()
{
    int   a { 32 },  b { 64 };
    char  p { 'p' }, q { 'q' };
    float x { 1.5 }, y { 1.0 };

    std::cout << max<int>(a, b) << std::endl;
    std::cout << max<char>(p, q) << std::endl;
    std::cout << max<float>(x, y) << std::endl;
}
