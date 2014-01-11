#include <iostream>

int main()
{
	double u[3] = {1.0, 2.0, 3.0};
	double v[3] = {6.0, 5.0, 4.0};

	double A[3][3] = {{1.0, 5.0, 0.0},
			  {7.0, 1.0, 2.0},
			  {0.0, 0.0, 1.0}};

	double B[3][3] = {{-2.0, 0.0, 1.0},
			  {1.0, 0.0, 0.0},
			  {4.0, 1.0, 0.0}};

	double w[3];
	for (int i = 0; i<3; i++)
	{
		w[i] = u[i] - 3.0*v[i];
	}	

	double x[3];
	for (int i = 0; i<3; i++)
	{
		x[i] = u[i] - v[i];
	}

	double y[3] = {0.0, 0.0, 0.0};
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++) 
		{
			y[i] += A[i][j] * u[j];
		}
	}

	double z[3];
	for (int i = 0; i<3; i++)
	{
		z[i] = y[i] - u[i];
	}

	double C[3][3];
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			C[i][j] = 4*A[i][j] - 3*B[i][j];
		}
	}
	
	std::cout << "C" << std::endl;

	for (int i = 0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			std::cout << C[i][j] << " ";
		}
		std::cout << std::endl;
	}

	double D[3][3];
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			D[i][j] = A[i][0] * B[0][j] + 
				  A[i][1] * B[1][j] + 
				  A[i][2] * B[2][j];
		}
	}

	std::cout << "D" << std::endl;

	for (int i = 0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			std::cout << D[i][j] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}
