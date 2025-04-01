#include <iostream>

//#define MACRO0
//#define MACRO1
#define MACRO2


int main()
{
#ifdef MACRO0
    std::cout << "MACRO0" << std::endl;
#elifndef MACRO1
    std::cout << "MACRO1" << std::endl;
#elifdef MACRO2
    std::cout << "MACRO2" << std::endl;
#endif
}
