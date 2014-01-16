#include <iostream>
#include <cmath>

double det(double** M, int row, int col, int first_row, int remove_col);
double** CreateMat(double** M, int row, int col, int remove_row, int remove_col);

int main()
{
    double** A;

    A = new double* [2];
    for (int i = 0; i<2; i++)
    {
        A[i] = new double [2];
    }

    A[0][0] = 1.0; A[0][1] = 2.0;
    A[1][0] = 0.0; A[1][1] = 1.0;

    std::cout << det(A, 2, 2, 0, -1) << std::endl;

    for (int i = 0; i<2; i++)
    {
        delete[] A[i];
    }

    delete[] A;

    return 0;
}

double det(double** M, int row, int col, int first_row, int remove_col)
{

    double d;
    int j;
    if ((row-first_row) == 1)
    {
        // indexing needs to be edited
        return M[0][0];
    }

    else
    {
        d = 0;
        j = 0;
        for (int i = 0; i<col; i++)
        {
            if (remove_col == i) 
            {
                d += pow(-1, j) * M[first_row][i] * det(M, row, col, first_row+1, i);       
            }
            j++;
        }
        return d;
    }
}

double** CreateMat(double** M, int dim, int remove_row, int remove_col)
{   
    double ** N;
    N = new double* [dim];
    
    for (int i = 0; i<dim; i++)
    {
        N[i] = new double [dim];
    }

    return N;

}
