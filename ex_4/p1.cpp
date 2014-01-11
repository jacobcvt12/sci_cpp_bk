#include <iostream>

int main(int argc, char* argv[])
{
	int i = 5;
	int* p_j;

	p_j = &i;

	*p_j = *p_j * 5;

	int* p_k;
	p_k = new int[1];

	p_k[0] = i;

	delete[] p_k;

	return 0;
}
