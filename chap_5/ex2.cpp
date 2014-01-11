#include <iostream>
#include <cmath>

void CalculateRealAndImaginary(double r, double theta,
                               double* pReal, double* pImaginary);

int main(int argc, char* argv[])
{
    double r = 3.4;
    double theta = 1.23;
    double x, y;

    CalculateRealAndImaginary(r, theta, &x, &y);
    std::cout << "Real part = " << x << std::endl;
    std::cout << "Imaginary part = " << y << std::endl;

    return 0;
}

void CalculateRealAndImaginary(double r, double theta,
                               double* pReal, double* pImaginary)
{
    *pReal = r*cos(theta);
    *pImaginary = r*sin(theta);
}
