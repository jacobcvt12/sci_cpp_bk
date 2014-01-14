#include <iostream>
#include <cassert>

int CalculateFactorial(int n);

int main()
{
	std::cout << "10! = " << CalculateFactorial(10) << std::endl;

	return 0;
}

int CalculateFactorial(int n)
{
	assert(n > 0);
	if (n == 1)
	{
		return 1;
	}

	else
	{
		return n*CalculateFactorial(n-1);
	}
}
