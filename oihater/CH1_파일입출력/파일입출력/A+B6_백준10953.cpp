#include <iostream>

int main()
{
	int rep;
	char c;
	std::cin >> rep;
	int num1, num2;
	for (int i = 0; i<rep; i++)
	{
		std::cin >> num1 >> c >> num2;
		std::cout << num1 + num2 << std::endl;

	}

	return 0;
}