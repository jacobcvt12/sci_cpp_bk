#include <iostream>
#include <cmath>

double det(double** M, int dim, int* row_array, int* col_array, int remove_col=-1);

int main()
{
    double** A;
	int dim = 4;

    A = new double* [dim];
    for (int i = 0; i<dim; i++)
    {
        A[i] = new double [dim];
    }

    A[0][0] = 1.0; A[0][1] = 2.0; A[0][2] = 3.0; A[0][3] = 4.0;
    A[1][0] = 5.0; A[1][1] = 6.0; A[1][2] = 7.0; A[1][3] = 8.0;
    A[2][0] = 9.0; A[2][1] = 10.0; A[2][2] = 11.0; A[2][3] = 12.0;
    A[3][0] = 13.0; A[3][1] = 14.0; A[3][2] = 15.0; A[3][3] = 16.0;

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

        if (dim > 1)
        {
            for (int i = 0; i<=dim; i++)
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
        }

        else
        {
            rows[0] = row_array[1];
            for (int k = 0; k<=dim; k++)
            {	
                if (k != remove_col)
                {
                    cols[0] = col_array[k];
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
                d += pow(-1, i) * M[rows[0]][cols[i]] * 
					det(M, dim-1, rows, cols, i);       

        }
        
        return d;
    }
}
