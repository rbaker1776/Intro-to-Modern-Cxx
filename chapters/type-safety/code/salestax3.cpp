#include <iostream>

struct Price { double value; };
struct TaxRate { double value; };

Price final_price(Price p, TaxRate t)
{
	return { (1.0 + t.value) * p.value };
}

int main()
{
	Price p { 5499.99 };
	TaxRate t { 0.06 };
	std::cout << final_price(t, p).value << std::endl;
}
