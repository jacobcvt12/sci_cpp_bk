#include "ComplexNumber.hpp"
#include <cmath>

// Override default constructor
// Set real and imaginary parts to zero
ComplexNumber::ComplexNumber()
{
    mRealPart = 0.0;
    mImaginaryPart = 0.0;
}

// Constructor that sets complex number z=x+iy
ComplexNumber::ComplexNumber(double x, double y)
{
    mRealPart = x;
    mImaginaryPart = y;
}

// Method for calculating the modulus of a complex number
ComplexNumber::CalculateModulus() const
{
    return sqrt(mRealPart*mRealPart +
                mImaginaryPart*mImaginaryPart);
}
