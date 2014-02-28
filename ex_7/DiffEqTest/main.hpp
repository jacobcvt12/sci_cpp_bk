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
        //virtual double RightHandSide(double y, double t) = 0;
        virtual double SolveEquation() = 0;
        
        double GetStepSize() const;
        double GetInitialTime() const;
        double GetFinalTime() const;
        double GetInitialValue() const;
};

#endif

#ifndef FORWARDEULERSOLVERDEF
#define FORWARDEULERSOLVERDEF

class ForwardEulerSolver : public AbstractOdeSolver
{
    public:
        // the problem is here. need to define this function.
        //double RightHandSide(double y, double t);
        double SolveEquation();
};

#endif
