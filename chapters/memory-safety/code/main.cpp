#include "uniqueptr.h"
#include "sharedptr.h"
#include <iostream>


int main()
{
    UniquePtr<int> u(new int(1));
    (*u)++;
    std::cout << *u << std::endl;
    //UniquePtr<int> v { u };
    u.~UniquePtr();
    //std::cout << *u << std::endl;

    SharedPtr<int> p(new int(1));
    SharedPtr<int> q { p };
    *p = 2;
    p.~SharedPtr();
    std::cout << *q << std::endl;
    *q = 3;
    q.~SharedPtr();
    //std::cout << *q << std::endl;
    
}
