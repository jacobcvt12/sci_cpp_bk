#ifndef ABSTRACTODESOLVERDEF
#define ABSTRACTODESOLVERDEF

class AbstractOdeSolver
{
    private:
        double stepSize;
        double initialTime;
        double finalTime;
        double initialValue;
    public:
        void SetStepSize(double h);
        void SetTimeInterval(double t0, double t1);
        void SetInitialValue(double y0);
        virtual double RightHandSide(double y, double t) = 0;
        virtual double SolveEquation() = 0;
};

#endif
