#include <iostream>
#include <cmath>
#include <cstdlib>

double p_norm(double* v, int n, int p = 2);

int main(int argc, char* argv[])
{
    double* vec;
    vec = new double [(argc-1)];

    for (int i = 1; i<argc; i++)
    {
        vec[i-1] = atof(argv[i]);
    } 
    
    std::cout << "2-norm of vector is " << p_norm(vec, (argc-1)) << std::endl;
    
    delete[] vec;

    return 0;
}

double p_norm(double* v, int n, int p)
{
    double norm = 0.0;
    double power;

    for (int i = 0; i<n; i++)
    {
        norm += pow(fabs(v[i]), p);
    }

    power = 1.0 / (double) (p);
    
    return pow(norm, power);
}
