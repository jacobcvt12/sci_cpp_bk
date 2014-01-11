#include <iostream>

int main(int argc, char* argv[])
{
	int i = 4, j = 5;
	int* p_k;
	int* p_l;
	int* p_m;
	
	std::cout << "i= " << i << " j= " << j << "\n";

	p_m = new int[1];

	p_m[0] = i; 
	

	p_k = &i;
	
	*p_k = j;
	p_k = &j;

	*p_k = p_m[0];

	delete[] p_m;

	std::cout << "i= " << i << " j= " << j << "\n";

	return 0;
}
