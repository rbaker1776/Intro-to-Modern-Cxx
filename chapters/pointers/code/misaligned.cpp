#include <iostream>


int main()
{
    int* p1 { (int*)1002 };
    int* p2 { (int*)1000 };
    std::cout << (p1 - p2) << std::endl;
}
