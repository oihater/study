#include <iostream>

int main()
{
	int num1, num2;
	while (std::cin >> num1 >> num2)
	{
		if (num1 != 0 && num2 != 0)
		{
			std::cout << num1 + num2 << std::endl;
		}
		else
			break;
	}

	return 0;
}