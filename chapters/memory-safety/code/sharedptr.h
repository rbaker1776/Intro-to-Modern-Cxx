#ifndef SHAREDPTR_H_A1BC270A9756B7EF
#define SHAREDPTR_H_A1BC270A9756B7EF


template<class T>
class SharedPtr
{
private:
    T* ptr;
    int* ref_cnt;

    void release()
    {
        if (ptr && --(*ref_cnt) == 0)
        {
            delete ptr;
            delete ref_cnt;
            ptr = nullptr;
            ref_cnt = nullptr;
        }
    }

public:
    SharedPtr(T* p = nullptr): ptr(p), ref_cnt(p == nullptr ? new int(0) : new int(1)) {}
    SharedPtr(const SharedPtr& other): ptr(other.ptr), ref_cnt(other.ref_cnt)
    {
        if (ptr)
        {
            ++(*ref_cnt);
        }
    }
    ~SharedPtr()
    {
        release();
    }

    SharedPtr& operator=(const SharedPtr& other)
    {
        if (this != &other)
        {
            release();
            ptr = other.ptr;
            ref_cnt = other.ref_cnt;
            if (ptr)
            {
                ++(*ref_cnt);
            }
        }
        return *this;
    }

    T* operator->() const { return ptr; }
    T& operator*() const { return *ptr; }
};


#endif // SHAREDPTR_H_A1BC270A9756B7EF
