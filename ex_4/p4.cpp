#include <iostream>

int main(int argc, char* argv[])
{
	double** A;
	double** B;
	double** C;

	A = new double* [2];
	B = new double* [2];
	C = new double* [2];

	for (int i = 0; i<2; i++)
	{
		A[i] = new double [2];
		B[i] = new double [2];
		C[i] = new double [2];
	}

	A[0][0] = 1.0;
	A[0][1] = 1.0;
	A[1][0] = 1.0;
	A[1][1] = 1.0;

	B[0][0] = 1.0;
	B[0][1] = 1.0;
	B[1][0] = 1.0;
	B[1][1] = 1.0;

	for (int i = 0; i<2; i++)
	{
		for (int j = 0; j<2; j++)
		{
			C[i][j] = A[i][j] + B[i][j];

			if (i == 0)
			{
				std::cout << C[i][j] << " ";
			}
			else if (i == 1 && j == 0)
			{
				std::cout << "\n" << C[i][j] << " ";
			}
			else
			{
				std::cout << C[i][j] << std::endl;
			}
		}
	}


	for (int i = 0; i<2; i++)
	{
		delete[] A[i];
		delete[] B[i];
		delete[] C[i];
	}

	delete[] A;
	delete[] B;
	delete[] C;
	
	return 0;
}
