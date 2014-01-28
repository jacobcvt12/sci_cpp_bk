#ifndef EXAMPLECLASSDEF
#define EXAMPLECLASSDEF

class ExampleClass
{
    private:
        double mMemberVariable1;
        double mMemberVariable2;
    public:
        ExampleClass(double member1, double member2);
        double GetMinimum() const;
        friend double GetMaximum(const ExampleClass& egClass);
};

#endif
