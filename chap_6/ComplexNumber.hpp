#ifndef COMPLEXHEADERDEF
#define COMPLEXHEADERDEF

#include <iostream>

class ComplexNumber
{
    private:
        double mRealPart;
        double mImaginaryPart;
    public:
        ComplexNumber();
        ComplexNumber(double x, double y);
        double CalculateModulus() const;
        double CalculateArgument() const;
        ComplexNumber CalculatePower(double n) const;
        ComplexNumber& operator=(const ComplexNumber& n) const;
        ComplexNumber operator-() const;
        ComplexNumber operator+(const ComplexNumber& z) const;
        ComplexNumber operator-(const ComplexNumber& z) const;
        friend std::ostream& operator<<(std::ostream& output, const ComplexNumber& z);
};

#endif
