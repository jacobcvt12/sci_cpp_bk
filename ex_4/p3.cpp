#include <iostream>

int main(int argc, char* argv[])
{
	double* vec1;
	double* vec2;

	int dp;
	
	for (int j = 0; j<1e9; j++)
	{

		vec1 = new double[3];
		vec2 = new double[3];

		vec1[0] = 3;
		vec1[1] = 3;
		vec1[2] = 3;

		vec2[0] = 3;
		vec2[1] = 3;
		vec2[2] = 3;

		dp=0;

		for (int i = 0; i<3; i++)
		{
			dp += (vec1[i] * vec2[i]);
		}

		//std::cout << "Dot product is " << dp << std::endl;

		delete[] vec1;
		delete[] vec2;

		if (j % ((int) (1e6)) == 0) 
		{
			std::cout << j << std::endl;
		}
	}

	return 0;
}
