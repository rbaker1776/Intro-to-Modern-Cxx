#ifndef UNIQUEPTR_H_6BA277E29732A346
#define UNIQUEPTR_H_6BA277E29732A346


template<class T>
class UniquePtr
{
private:
    T* ptr;

public:
    UniquePtr(): ptr(nullptr) {};
    UniquePtr(T* ptr): ptr(ptr) {}

    UniquePtr(const UniquePtr&) = delete;
    UniquePtr& operator=(const UniquePtr&) = delete;

    ~UniquePtr()
    {
        delete ptr;
        ptr = nullptr;
    }

    T* operator->() { return ptr; }
    T& operator*() { return *ptr; }
};


#endif // UNIQUEPTR_H_6BA277E29732A346
