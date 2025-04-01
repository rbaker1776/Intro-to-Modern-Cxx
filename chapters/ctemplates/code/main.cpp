#include "list.h"
#include <iostream>


int main()
{
    List<int> list {};
    list.insert(40);
    list.insert(30);
    list.insert(20);
    list.insert(10);
    std::cout << list << std::endl;
}
