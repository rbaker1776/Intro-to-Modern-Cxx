
#if (CONTROL == 1)
int x = 0;
#elif (CONTROL == 2)
int x = 10;
#else
int x = 40;
#endif

#include <iostream>

int main()
{
    std::cout << x << std::endl;
}
