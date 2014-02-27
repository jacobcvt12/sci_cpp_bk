#include "ForwardEulerSolver.hpp"

double ForwardEulerSolver::SolveEquation()
{
    double y_i_1 = GetInitialValue();
    double t_i_1 = GetInitialTime();
    double y_i;
    
    while (t_i_1 < GetFinalTime()) 
    {
        y_i = y_i_1 + GetStepSize() * RightHandSide(y_i_1, t_i_1);
        y_i_1 = y_i;
        t_i_1 = t_i_1 + GetStepSize();
    }

    return y_i;
}
