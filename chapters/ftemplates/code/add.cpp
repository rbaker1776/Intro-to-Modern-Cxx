#include "add.h"


template<class T>
T add(T a, T b)
{
    return a + b;
}

template int add<int>(int, int);
