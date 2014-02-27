#ifndef FORWARDEULERSOLVERDEF
#define FORWARDEULERSOLVERDEF

#include "AbstractOdeSolver.hpp"

class ForwardEulerSolver : public AbstractOdeSolver
{
    public:
        double (*RightHandSide)(double y, double t);
        double SolveEquation();
};

#endif
