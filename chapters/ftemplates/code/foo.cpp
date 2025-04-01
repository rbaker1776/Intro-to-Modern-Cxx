#include <iostream>

template<class T>
void foo(T t) { std::cout << typeid(t).name() << std::endl; }

int main()
{
	int a { 15 };	//
	foo(a);			//
	foo<double>(a);	//
	foo('a');		//
	foo(&a);		//
	foo(short(a)); //
}
