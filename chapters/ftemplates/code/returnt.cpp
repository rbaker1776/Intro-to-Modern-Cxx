template<class T>
T foo()
{
    return T(0);
}


int main()
{
    foo<int>();
    foo<double>();
}
