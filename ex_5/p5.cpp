#include <iostream>
#include <cassert>

double** Multiply(double** M, int M_row, int M_col, 
		 double** N, int N_row, int N_col);

int main(int argc, char* argv[])
{
	double A[2][2] = {{1.0, 0.0}, {0.0, 1.0}};
	double B[2][2] = {{2.0, 3.0}, {4.5, 7.0}};

	double** AB;
	
	AB = Multiply(A, 2, 2, B, 2, 2);

	return 0;
}

double** Multiply(double** M, int M_row, int M_col, 
		 double** N, int N_row, int N_col)
{
	assert(M_col == N_row);

	double C[M_row][N_col];
	int sum;
	
	for (int i = 0; i < M_row; i++)
	{
		for (int j = 0; j < N_col; j++)
		{
			sum = 0;
			for (int k = 0; k < M_col; k++)
			{
				sum += M[i][k] * N[k][j];
			}
			C[i][j] = sum;
		}
	}

	return M;					
}
