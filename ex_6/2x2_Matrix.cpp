#include <iostream>
#include "2x2_Matrix.hpp"

// Contructor that initializes all entries to zero.
Matrix::Matrix()
{
    entry1_1 = 0;
    entry1_2 = 0;
    entry2_1 = 0;
    entry2_2 = 0;
}

// overridden copy contructor that mimics system version
Matrix::Matrix(const Matrix& otherMatrix)
{
    entry1_1 = otherMatrix.entry1_1;
    entry1_2 = otherMatrix.entry1_2;
    entry2_1 = otherMatrix.entry2_1;
    entry2_2 = otherMatrix.entry2_2;
}

// Specialised constructor to populate entries based on arguments
Matrix::Matrix(double num1, double num2, double num3, double num4)
{
    entry1_1 = num1;
    entry1_2 = num2;
    entry2_1 = num3;
    entry2_2 = num4;
}

// Method to calculate determinant
double Matrix::GetDeterminant() const
{
    return entry1_1*entry2_2 - entry1_2*entry2_1;
}

Matrix Matrix::GetInverse() const
{
    if (GetDeterminant() > 0.001 && GetDeterminant() < -0.001)
    {
        double det_inv = 1/GetDeterminant();
        Matrix A(det_inv * entry2_2, det_inv * (-1) * entry1_2, det_inv * (-1) * entry2_1, det_inv * entry1_1);;
        return A;
    }
    else
    {
        std::cout << "Determinant is zero.\nInverse does not exist\n";
        Matrix A;
        return A;
    }
}

// Overload the assignment operator
Matrix& Matrix::operator=(const Matrix& A)
{
    entry1_1 = A.entry1_1;
    entry1_2 = A.entry1_2;
    entry2_1 = A.entry2_1;
    entry2_2 = A.entry2_2;

    return *this;
}

// overload the unary operator
Matrix Matrix::operator-() const
{
    Matrix A;
    A.entry1_1 = -entry1_1;
    A.entry1_2 = -entry1_2;
    A.entry2_1 = -entry2_1;
    A.entry2_2 = -entry2_2;

    return A;
}

// overload the binary addition operator 
Matrix Matrix::operator+(const Matrix& A) const
{
    Matrix B;
    B.entry1_1 = entry1_1 + A.entry1_1;
    B.entry1_2 = entry1_2 + A.entry1_2;
    B.entry2_1 = entry2_1 + A.entry2_1;
    B.entry2_2 = entry2_2 + A.entry2_2;

    return B;
}

// overload the binary subtraction operator 
Matrix Matrix::operator-(const Matrix& A) const
{
    Matrix B;
    B.entry1_1 = entry1_1 - A.entry1_1;
    B.entry1_2 = entry1_2 - A.entry1_2;
    B.entry2_1 = entry2_1 - A.entry2_1;
    B.entry2_2 = entry2_2 - A.entry2_2;

    return B;
}

// overload the scalar multiplication operator
Matrix Matrix::operator*(const double a) const
{
    Matrix A;
    A.entry1_1 = a * entry1_1;
    A.entry1_2 = a * entry1_2;
    A.entry2_1 = a * entry2_1;
    A.entry2_2 = a * entry2_2;

    return A;
}
