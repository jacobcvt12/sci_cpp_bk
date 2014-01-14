#include <iostream>

void PrintValue(double* y);

int main()
{
	double x = 3.0;
	double* y;

	y = &x;

	PrintValue(y);
	
	return 0;
}

void PrintValue(double* y)
{
	std::cout << "y = " << *y << std::endl;
}
