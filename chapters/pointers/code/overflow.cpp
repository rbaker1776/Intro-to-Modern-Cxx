// example from https://cs61.seas.harvard.edu/site/2018/Datarep4/
// doesn't hold on this machine with clang

#include <iostream>
#include <cassert>


int main()
{
    const char* p{ (char*)-1 };
    //char* q{ p + 1 };

    assert(p + 1 > p);
    //assert(q > p);
}
