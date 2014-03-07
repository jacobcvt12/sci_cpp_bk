#ifndef MATRIXHEADERDEF
#define MATRIXHEADERDEF

class Matrix
{
    public:
        double entry1_1, entry1_2, entry2_1, entry2_2;
        Matrix();
        Matrix(const Matrix& otherMatrix);
        Matrix(double num1, double num2, double num3, double num4);
        double GetDeterminant() const;
        Matrix GetInverse() const;
        Matrix& operator=(const Matrix& A);
        Matrix operator-() const;
        Matrix operator+(const Matrix& A) const;
        Matrix operator-(const Matrix& A) const;
        Matrix operator*(const double a) const;
};

#endif
