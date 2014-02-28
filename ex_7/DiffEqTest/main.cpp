#include "main.hpp"
#include <iostream>
#include <math.h>


void AbstractOdeSolver::SetStepSize(double h)
{
    stepSize = h;
}

void AbstractOdeSolver::SetTimeInterval(double t0, double t1)
{
    initialTime = t0;
    finalTime = t1;
}

void AbstractOdeSolver::SetInitialValue(double y0)
{
    initialValue = y0;
}

double AbstractOdeSolver::GetStepSize() const
{
    return stepSize;
}

double AbstractOdeSolver::GetInitialTime() const
{
    return initialTime;
}

double AbstractOdeSolver::GetFinalTime() const
{
    return finalTime;
}

double AbstractOdeSolver::GetInitialValue() const
{
    return initialValue;
}

double ForwardEulerSolver::SolveEquation()
{
    double y_i_1 = GetInitialValue();
    double t_i_1 = GetInitialTime();
    double y_i;
    
    while (t_i_1 < GetFinalTime()) 
    {
        y_i = y_i_1 + GetStepSize() * 1; /*RightHandSide(y_i_1, t_i_1);*/
        y_i_1 = y_i;
        t_i_1 = t_i_1 + GetStepSize();
    }

    return y_i;
}

double diffEq(double Y, double T)
{
    return 1 + T + Y - Y;
}

double SolDiffEq(double t)
{
    return (pow(t, 2.0) + 2.0*t + 4.0)/2.0;
}

int main()
{
    ForwardEulerSolver easy_diff_eq;
    easy_diff_eq.SetStepSize(100);
    easy_diff_eq.SetTimeInterval(0, 1);
    easy_diff_eq.SetInitialValue(2);

    double actual;
    actual = SolDiffEq(1);

    std::cout << "Actual solution at time t=1 is = " << actual << "\n";

    return 0;
}
