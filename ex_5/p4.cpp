#include <iostream>
#include <cmath>

void SD_and_mean(double vector[], int length, double* s, double* p);

int main(int argc, char* argv[])
{
	double x[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
	
	double* sd;
	sd = new double[1];

	double* mean;
	mean = new double[1];

	SD_and_mean(x, 5, sd, mean);

	std::cout << "Mean = " << *mean << "\nStandard Deviation = " << *sd << std::endl;

	return 0;
}

void SD_and_mean(double vector[], int length, double* s, double* p)
{
	double sum = 0;

	for (int i = 0; i < length; i++)
	{
		sum += vector[i];
	}

	*p = sum / (double) (length);

	sum = 0;

	for (int i = 0; i < length; i++)
	{
		sum += pow((vector[i] - *p), 2);
	}

	*s = sqrt(sum/ (double)(length-1));

}
