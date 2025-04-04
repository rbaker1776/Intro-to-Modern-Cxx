#ifndef UNIQUEPTR_H_1F30321EFAC0F449
#define UNIQUEPTR_H_1F30321EFAC0F449


template<class T>
class UniquePtr
{
private:
    T* ptr;

public:
    unique_ptr(): ptr(nullptr) {};
    unique_ptr(T* ptr): ptr(ptr) {}

    unique_ptr(const unique_ptr&) = delete;
    unique_ptr& operator=(const unique_ptr&) = delete;

    ~unique_ptr()
    {
        delete ptr;
    }

    T* operator->() { return ptr; }
};


#endif // UNIQUEPTR_H_1F30321EFAC0F449
