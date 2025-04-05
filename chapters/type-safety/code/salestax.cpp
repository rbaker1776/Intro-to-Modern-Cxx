#include <iostream>

double final_price(double p, double t)
{
	return (1.0 + t) * p;
}

int main()
{
	double p = 5499.99;
	double t = 0.06;
	std::cout << final_price(t, p) << std::endl;
}
