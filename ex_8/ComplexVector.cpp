#include <set>
#include <iostream>
#include "ComplexNumber.hpp"

int main()
{
    std::set<ComplexNumber> comp_vector;

    comp_vector.insert(ComplexNumber(1, 1));
    comp_vector.insert(ComplexNumber(0, 1));
    comp_vector.insert(ComplexNumber(0, 1));
    comp_vector.insert(ComplexNumber(-4, 7));

    std::cout << "Number of points in set = " 
              << comp_vector.size() << "\n";

    //std::set<ComplexNumber>::const_iterator c;

    //for (c=comp_vector.begin(); c!=comp_vector.end(); c++)
    //{
        //std::cout << *c << "\n";
    //}

    return 0;
}
