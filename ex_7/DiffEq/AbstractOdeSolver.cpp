#include "AbstractOdeSolver.hpp"

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
