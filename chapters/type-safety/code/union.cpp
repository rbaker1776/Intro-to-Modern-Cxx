#include <iostream>


template<class T>
struct TreeNode
{
    bool is_leaf;
    union Data
    {
        T data;
        struct
        {
            T* left;
            T* right;
        };
    }
};

union FloatInt
{
    float f;
    int i;
    unsigned u;
};

int main()
{
    FloatInt pun;
    pun.f = 3.14;
    std::cout << pun.i << std::endl;
    pun.i = -1;
    std::cout << pun.u << std::endl;
}
