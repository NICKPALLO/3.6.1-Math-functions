#include "functions.h"
#include <iostream>

void add(int a, int b)
{
	std::cout << a << " + " << b << " = " << a + b << std::endl;
}
void subtract(int a, int b)
{
	std::cout << a << " - " << b << " = " << a - b << std::endl;
}
void multiply(int a, int b)
{
	std::cout << a << " * " << b << " = " << a * b << std::endl;
}
void divide(int a, int b)
{
	std::cout << a << " / " << b << " = " << a / b << std::endl;
}
void power(int a, int b)
{
	int c = a;
	if (b > 0)
	{
		for (int i = 1;i < b;++i)
		{
			c *= a;
		}
	}
	else if (b < 0)
	{
		for (int i = 1;i < abs(b);++i)
		{
			c *= a;
		}
		c = 1 / c;
	}
	else { c = 1; }
	std::cout << a << " ^ " << b << " = " << c << std::endl;
}
