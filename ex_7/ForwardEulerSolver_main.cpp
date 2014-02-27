#include <iostream>
#include <math.h>
#include "ForwardEulerSolver.hpp"

double diffEq(double Y, double T)
{
    return 1 + T;
}

double SolDiffEq(double t)
{
    return (pow(t, 2.0) + 2.0*t + 4.0)/2.0;
}

int main()
{
    ForwardEulerSolver easy_diff_eq;
    //easy_diff_eq.SetStepSize(100);
    //easy_diff_eq.SetTimeInterval(0, 1);
    //easy_diff_eq.SetInitialValue(2);

    double actual;
    actual = SolDiffEq(1);

    std::cout << "Actual solution at time t=1 is = " << actual << "\n";

    return 0;
}
