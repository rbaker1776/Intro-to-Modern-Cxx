#include <string>
#include <iostream>

template<class From, class To>
To convert(From x)
{
    return To(x);
}

template<>
std::string convert<int, std::string>(int x)
{
    std::string s {};
    do
    {
        s = std::string(1, char('0' + x % 10)) + s;
        x /= 10;
    } while (x > 0);
    return s;
}

int main()
{
    using std::string;
    int x { convert<double, int>(114.5) }; // x = 114.0
    char   y { convert<int, char>(114) };   // y = 'r'
    string z { convert<int, string>(3452114) }; // error!

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
}
