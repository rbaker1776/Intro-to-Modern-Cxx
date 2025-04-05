#include "safetype.h"
#include <iostream>

using Price = SafeType<double, struct Price_>;
using TaxRate = SafeType<double, struct TaxRate_>;

Price final_price(Price p, TaxRate t)
{
	return { (1.0 + t) * p };
}

int main()
{
	Price p(5499.99);
	TaxRate t(0.06);
	std::cout << double(final_price(p, t)) << std::endl;
}
