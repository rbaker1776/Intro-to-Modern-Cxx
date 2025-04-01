template<class T>
T max(T a, T b)
{
    return (a > b ? a : b);
}

template<> int max<int>(int a, int b)
{
    return a; // not sure why one would do this
}

int main() {}
