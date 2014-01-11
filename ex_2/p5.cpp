#include <iostream>
#include <cassert>

int main()
{
	double A[2][2] = { {4.0, 1.0},
			   {1.0, 1.0} };

	double det = A[0][0]*A[1][1] - A[0][1]*A[1][0];
	assert(det != 0.0);

	double inv_A[2][2];

	inv_A[0][0] = (1.0/det) * A[1][1];
	inv_A[0][1] = (1.0/det) * (-1.0) * A[0][1];
	inv_A[1][0] = (1.0/det) * (-1.0) * A[1][0];
	inv_A[1][1] = (1.0/det) * A[0][0];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cout << inv_A[i][j] << " ";
		}
		
		std::cout << std::endl;
	}

	return 0;
}
