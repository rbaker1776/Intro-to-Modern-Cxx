// example from https://en.cppreference.com/w/cpp/language/pointer

#include <cassert>


int main()
{
    struct S
    {
        int x;
        int y;
    } s;

    int* px{ &s.x };
    int* pxe{ px + 1 };
    int* py{ &s.y };

    assert(pxe == py);

    *pxe = 1;
}

