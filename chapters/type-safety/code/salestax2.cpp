#include <iostream>

using Price = double;
using TaxRate = double;

Price final_price(Price p, TaxRate t)
{
	return (1.0 + t) * p;
}

int main()
{
	Price p = 5499.99;
	TaxRate t = 0.06;
	std::cout << final_price(t, p) << std::endl;
}
