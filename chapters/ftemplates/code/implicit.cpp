#include <iostream>

template<class T>
T max(T a, T b)
{
    return (a > b ? a : b);
}

struct MyStruct
{
    bool operator>(const MyStruct& other) { return false; }
};

int main()
{
    MyStruct s { max(MyStruct(), MyStruct()) };
    int x { max(5, 6) };        // max<int>(int, int)
    double y { max(5.0, 6.0) }; // max<double>(double, double)
    char z { max('5', '6') }; // max<double>(double, double)
    
    std::cout << typeid(s).name() << std::endl;
    std::cout << typeid(x).name() << std::endl;
    std::cout << typeid(y).name() << std::endl;
    std::cout << typeid(z).name() << std::endl;
}
