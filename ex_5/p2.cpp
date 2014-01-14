#include <iostream>

void ChangeVar(int* j);

int main()
{
	int x = 4;
	int* y;
	y = &x;

	std::cout << "y = " << *y << std::endl;
	
	ChangeVar(y);

	std::cout << "y = " << *y << std::endl;

	return 0;
}

void ChangeVar(int* j) 
{
	*j = 5;

}
