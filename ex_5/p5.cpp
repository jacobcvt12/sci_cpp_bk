#include <iostream>
#include <cassert>

double** Multiply(double** M, int M_row, int M_col, 
		 double** N, int N_row, int N_col);

int main()
{
    double** A;
    double** B;

    A = new double* [2];
    B = new double* [2];

    for (int i = 0; i<2; i++)
    {
        A[i] = new double [2];
        B[i] = new double [2];
    }

    A[0][0] = 1.0; A[0][1] = 0.0;
    A[1][0] = 0.0; A[1][1] = 1.0;
    
    B[0][0] = 2.0; B[0][1] = 3.0;
    B[1][0] = 4.5; B[1][1] = 7.0;

	
	double** AB = Multiply(A, 2, 2, B, 2, 2);

    for (int i = 0; i<2; i++)
    {
        std::cout << AB[i][0] << " " << AB[i][1] << std::endl;

        delete[] A[i];
        delete[] B[i];
    }

    delete[] A;
    delete[] B;

    return 0;
}

double** Multiply(double** M, int M_row, int M_col, double** N, int N_row, int N_col)
{
	assert(M_col == N_row);

	double** C;
    C = new double* [M_row];
	
	for (int i = 0; i < M_row; i++)
	{
        C[i] = new double [N_col];

		for (int j = 0; j < N_col; j++)
		{
		    C[i][j] = 0.0;
			
            for (int k = 0; k < M_col; k++)
			{
				C[i][j] += (M[i][k] * N[k][j]);
			}
		}
	}

	return C;					
}
