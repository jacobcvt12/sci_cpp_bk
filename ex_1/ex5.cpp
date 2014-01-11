
#include <iostream>
#include <string>

int main()
{
	std::string first, last;

	std::cout << "Enter your first name." << std::endl;
	std::cin >> first;
	std::cout << "Enter your last name." << std::endl;
	std::cin >> last;
	std::cout << first << " " << last << std::endl;

	return 0;
}
