#include <iostream>
#include <cmath>

int main()
{
	double vec1[3] = {1, 0, 0}, vec2[3] = {2, 1, 0}, dot, norm1, norm2;
	dot = vec1[0] * vec2[0] + vec1[1] * vec2[1] + vec1[2] * vec2[2];
	std::cout << "Dot product is " << dot << "\n";
	norm1 = sqrt(pow(vec1[0], 2) + pow(vec1[1], 2) + pow(vec1[2], 2));
	norm2 = sqrt(pow(vec2[0], 2) + pow(vec2[1], 2) + pow(vec2[2], 2));

	std::cout << "Norm 1 is " << norm1 << " and norm 2 is " << norm2 << "\n";

	return 0;
}
