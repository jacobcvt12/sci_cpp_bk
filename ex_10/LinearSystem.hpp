#ifndef LINEARSYSTEMHEADERDEF
#define LINEARSYSTEMHEADERDEF
#include "Vector.hpp"
#include "Matrix.hpp"

class LinearSystem
{
private:
   int mSize; // size of linear system
   Matrix* mpA;  // matrix for linear system
   Vector* mpb;  // vector for linear system

   // Only allow constructor that specifies matrix and 
   // vector to be used.  Copy constructor is private.
   LinearSystem(const LinearSystem& otherLinearSystem){};
public:
   LinearSystem(const Matrix& A, const Vector& b);

   // destructor frees memory allocated
   ~LinearSystem();

   // Method for solving system
   virtual Vector Solve();
};

#endif
//Code from Appendix.tex line 907 save as LinearSystem.hpp
