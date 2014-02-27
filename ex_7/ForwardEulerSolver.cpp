#include "ForwardEulerSolver.hpp"

double ForwardEulerSolver::SolveEquation()
{
    double y_i_1 = initialValue;
    double t_i_1 = initialTime;
    double y_i;
    
    while (t_i_1 < finalTime) 
    {
        y_i = y_i_1 + stepSize * RightHandSide(y_i_1, t_i_1);
        y_i_1 = y_i;
        t_i_1 = t_i_1 + stepSize;
    }

    return y_i;
}
