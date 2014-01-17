#include <iostream>
#include <cmath>

double det(double** M, int dim, int* row_array, int* col_array, int remove_col=-1);

int main()
{
    double** A;
	int dim = 3;

    A = new double* [dim];
    for (int i = 0; i<dim; i++)
    {
        A[i] = new double [dim];
    }

    A[0][0] = 1.0; A[0][1] = 2.0; A[0][2] = 3.0;
    A[1][0] = 4.0; A[1][1] = 5.0; A[1][2] = 6.0;
    A[2][0] = 7.0; A[2][1] = 8.0; A[2][2] = 9.0;

	int* a_row;
	int* a_col;

	a_row = new int [dim];
	a_col = new int [dim];

	for (int i = 0; i<dim; i++)
	{
			a_row[i] = i;
			a_col[i] = i;
	}
	
	double det_result = det(A, dim, a_row, a_col, -1);

    std::cout << "Determinant is " << det_result << std::endl;

    for (int i = 0; i<dim; i++)
    {
        delete[] A[i];
    }

    delete[] A;
	delete[] a_row;
	delete[] a_col;

    return 0;
}


double det(double** M, int dim, int* row_array, int* col_array, int remove_col)
{

    double d;
    
	int* rows;
	int* cols;

	rows = new int [dim];
	cols = new int [dim];
	
	if (remove_col==-1) 
	{
		for (int i = 0; i<dim; i++)
		{
				rows[i] = i;
				cols[i] = i;
		}
	}	
	else
	{
		int row_j = 0, col_j = 0;

		for (int i = 0; i<dim; i++)
		{
			if (dim > 1)
			{
				if (i != 0) 
				{		
					rows[row_j] = row_array[i];
					row_j++;
				}
				if (i != remove_col)
				{
					cols[col_j] = col_array[i];
					col_j++;
				}
			}
			else
			{
				rows[0] = row_array[1];
				for (int i = 0; i<=dim; i++)
				{	
					if (i!= remove_col)
					{
						cols[0] = row_array[i];
					}
				}
			}
		}
	}

	if (dim == 1)
    {	
        return M[rows[0]][cols[0]];
    }

    else
    {
        d = 0;
        for (int i = 0; i<dim; i++)
        {
            std::cout << "i: " << i << " dim: " << dim << "\n" << pow(-1, i) << " " <<  M[rows[0]][cols[i]] << std::endl;
                d += pow(-1, i) * M[rows[0]][cols[i]] * 
					det(M, dim-1, rows, cols, i);       

        }
        if (dim == 2) 
        {
            std::cout << "Determinant is " << d << std::endl;
        }
        return d;
    }
}
