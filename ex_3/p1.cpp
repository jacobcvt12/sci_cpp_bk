#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	double x[4] = {0.0, 1.0, 1.0, 0.0};
	double y[4] = {0.0, 0.0, 1.0, 1.0};

	std::ofstream write_file("x_and_y.dat");
	write_file.setf(std::ios::scientific);
	write_file.setf(std::ios::showpos);
	write_file.precision(10);

	for (int i = 0; i<4; i++)
	{
		write_file << x[i];

		if (i<3) 
		{
			write_file << " ";
		}
	}

	write_file << "\n";

	write_file.flush();

	for (int i = 0; i<4; i++)
	{
		write_file << y[i];
		
		if (i<3) 
		{
			write_file << " ";
		}
	}
	
	write_file.flush();
	
	write_file.close();

	return 0;
}
