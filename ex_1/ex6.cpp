#include <iostream>

int main()
{
	int cars[6] = {34, 58, 57, 32, 43};
	double avg = ((double)(cars[0])+(double)(cars[1])+(double)(cars[2])+
			(double)(cars[3])+(double)(cars[4]))/5.0;

	std::cout << "The average is " << avg << std::endl;

	return 0;
}
	
