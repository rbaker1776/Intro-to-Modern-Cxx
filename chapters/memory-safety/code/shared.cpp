#include <iostream>
#include <memory>

class MyClass
{
public:
	MyClass() { std::cout << "constructed" << std::endl; }
	~MyClass() { std::cout << "destroyed" << std::endl; }
};

int main()
{
	std::shared_ptr<MyClass> ptr { nullptr };

	{
		std::shared_ptr<MyClass> myobj { std::make_shared<MyClass>() };
		//ptr = myobj;
	}

	std::cout << "left scope" << std::endl;
}
