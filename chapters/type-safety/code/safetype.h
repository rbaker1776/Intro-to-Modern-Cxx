#ifndef SAFETYPE_H_C6A27DBE26059F30
#define SAFETYPE_H_C6A27DBE26059F30


template<class T, class Tag>
class SafeType
{
private:
	T value;

public:
	SafeType(T t): value(t) {}
	
	template<class U, class UTag>
	SafeType(const SafeType<U, UTag>&) = delete;

	operator T() const { return value; }
};


#endif // SAFETYPE_H_C6A27DBE26059F30
