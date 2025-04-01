#include <iostream>


template<class T>
struct S
{
    static int s_var;
};

template<class T> int S<T>::s_var { -1 };


int main()
{
    S<int> i {};
    std::cout << i.s_var << std::endl;
}
