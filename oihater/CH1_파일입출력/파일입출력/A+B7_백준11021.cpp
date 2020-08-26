#include <iostream>

int main()
{
	int rep, num1, num2;
	std::cin >> rep;
	for (int i = 0; i<rep; i++)
	{
		std::cin >> num1 >> num2;
		std::cout << "Case #" << i + 1 << ": " << num1 + num2 << std::endl;
	}
	return 0;
}