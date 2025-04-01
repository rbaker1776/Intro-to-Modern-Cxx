#include <iostream>

#define DEBUG 1

#if DEBUG
    int x { 0 };
#endif

int main()
{
    std::cout << x << std::endl;
}
