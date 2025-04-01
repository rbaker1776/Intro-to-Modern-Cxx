#include <iostream>


template<class T>
struct Structure
{
    T value;

    template<class U>
    void method() const;
};

template<class T>
template<class U>
void Structure<T>::method() const
{
    std::cout << U(value) << std::endl;
}


int main()
{
    Structure<double> s { 5.5 };
    s.method<int>();
}
