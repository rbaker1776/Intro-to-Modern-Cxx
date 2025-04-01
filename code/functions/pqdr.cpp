#include <iostream>

int main()
{
    int p { 55 }, q { 10 };
    int d { p / q }, r { p % q };
    std::cout << p << " / " << q << " = " << d;
    std::cout << " remainder " << r << '\n';

    p = 40, q = 17;
    d = p / q, r = p % q;
    std::cout << p << " / " << q << " = " << d;
    std::cout << " remainder " << r << '\n';

    p = 144, q = 1000;
    d = p / q, r = p % q;
    std::cout << p << " / " << q << " = " << d;
    std::cout << " remainder " << r << '\n';
}
