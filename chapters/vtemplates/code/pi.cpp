#include <iostream>

template<class T> const T pi = T(3.14159265358979323);

int main()
{
    std::cout << "math's pi: "     << pi<double> << std::endl;
    std::cout << "engineer's pi: " << pi<int>    << std::endl;
    using namespace std;
    cout << "math" << pi<double> << endl; // 3.14159
    cout << "engineering" << pi<int> << endl; // 3
}
