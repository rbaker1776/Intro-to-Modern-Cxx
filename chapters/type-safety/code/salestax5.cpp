#include "safetype.h"
#include <iostream>

struct Price: SafeType<double, Price> { using SafeType::SafeType; };
struct TaxRate: SafeType<double, TaxRate> { using SafeType::SafeType; };

Price final_price(Price p, TaxRate t)
{
	return { (1.0 + t) * p };
}

int main()
{
	Price p(5499.99);
	TaxRate t(0.06);
	std::cout << double(final_price(t, p)) << std::endl;
}
