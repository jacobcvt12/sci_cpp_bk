#ifndef COMPLEXNUMBERHEADERDEF
#define COMPLEXNUMBERHEADERDEF

#include <iostream>

class ComplexNumber
{
private:
   double mRealPart;
   double mImaginaryPart;
public:
   ComplexNumber();
   ComplexNumber(double x, double y);
   ComplexNumber(double x);
   ComplexNumber(const ComplexNumber& z);
   double CalculateModulus() const;
   double CalculateArgument() const;
   ComplexNumber CalculatePower(double n) const;
   ComplexNumber CalculateConjugate() const;
   void SetConjugate();
   ComplexNumber& operator=(const ComplexNumber& z);
   ComplexNumber operator-() const;
   ComplexNumber operator+(const ComplexNumber& z) const;
   ComplexNumber operator-(const ComplexNumber& z) const;
   friend std::ostream& operator<<(std::ostream& output, 
                                   const ComplexNumber& z);
   double GetRealPart() const;
   double GetImaginaryPart() const;
   friend double RealPart(const ComplexNumber& z);
   friend double ImaginaryPart(const ComplexNumber& z);
};

#endif
//Code from Chapter06.tex line 746 save as ComplexNumber.hpp
