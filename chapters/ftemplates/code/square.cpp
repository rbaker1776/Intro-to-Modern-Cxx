#include <iostream>

template<class T>
T square(T x)
{
    return x * x;
}

template int square<int>(int);
template double square<double>(double);

int main()
{
}
