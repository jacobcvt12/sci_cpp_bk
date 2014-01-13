#include <iostream>

double CalculateScalarProduct(int size, double* a, double* b);

int main(int argc, char* argv[])
{
    int n = 3;
    double* x = new double [n];
    double* y = new double [n];

    x[0] = 1.0; x[1] = 4.0; x[2] = -7.0;
    y[0] = 4.4; y[1] = 4.3; y[2] = 76.7;

    double ScalarProduct = CalculateScalarProduct(n, x, y);
    std::cout << "Scalar product = " << ScalarProduct << std::endl;

    delete[] x;
    delete[] y;

    return 0;
}

double CalculateScalarProduct(int size, double* a, double* b)
{
    double scalar_product = 0.0;

    for (int i = 0; i<size; i++)
    {
        scalar_product += a[i] * b[i];
    }

    return scalar_product;
}
