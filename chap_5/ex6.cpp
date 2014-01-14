#include <iostream>

double myFunction(double x);
double myOtherFunction(double x);

int main(int argc, char* argv[]) 
{
	double (*p_function)(double x);

	p_function = &myFunction;
	std::cout << p_function(2.0) << std::endl;

	p_function = &myOtherFunction;
	std::cout << p_function(2.0) << std::endl;

	return 0;
}

double myFunction(double x)
{
	return x*x;
}

double myOtherFunction(double x)
{
	return x*x*x;
}
