#include <iostream>
#include <cmath>

void DoSomething(double u[], double A[][10],
                 double B[10][10]);

int main(int argc, char* argv[])
{
    double u[5], A[10][10], B[10][10];

    DoSomething(u, A, B);

    std::cout << u[2] << std::endl;
    std::cout << A[2][3] << std::endl;
    std::cout << B[3][3] << std::endl;

    return 0;
}

void DoSomething(double u[],double A[][10], double B[10][10])
{
    u[2] = 1.0;
    A[2][3] = 4.0;
    B[3][3] = -90.6;
}
