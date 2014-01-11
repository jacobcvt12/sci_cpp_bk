#include <iostream>
#include <cstdlib>
#include <cassert>
#include <fstream>

int main(int argc, char *argv[])
{
	int N = atoi(argv[1]);
	assert(N > 1);

	double h = 1.0 / ((double)(N));
	double y[N];
	double x[N];

	y[0] = 1;
	x[0] = 0;

	for (int i = 1; i<N; i++)
	{
		y[i] = (y[i-1])/(1+h);
		x[i] = i * h;
	}

	std::ofstream write_file("xy.dat");

	for (int i = 0; i<N; i++)
	{
		write_file << x[i] << " " << y[i] << "\n";
		write_file.flush();
	}

	write_file.close();

}

