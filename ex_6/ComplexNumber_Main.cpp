#include "ComplexNumber.hpp"

int main()
{
    ComplexNumber z1(4.0, 3.0);

    std::cout << "z1= " << z1 << "\n";
    std::cout << "Modulus of z1 is " << z1.CalculateModulus() << "\n";

    ComplexNumber z2;

    z2 = z1.CalculatePower(3);
    std::cout << "z2 = z1*z1*z1 " << z2 << "\n";
    ComplexNumber z3, z4;
    z3 = -z2;
    z4 = z1+z2;

    std::cout << "z3 = " << z3 << " z4= " << z4 << "\n";

    return 0;
}
