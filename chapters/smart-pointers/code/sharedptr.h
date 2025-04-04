#ifndef SHAREDPTR_H_1C65C2049E68732E
#define SHAREDPTR_H_1C65C2049E68732E


template<class T>
class SharedPtr
{
private:
    T* ptr;
    unsigned ref_cnt;

public:
    SharedPtr(): ptr(nullptr), ref_cnt(0) {}
    SharedPtr(T* ptr): ptr(ptr), ref_cnt(1) {}
};


#endif // SHAREDPTR_H_1C65C2049E68732E
