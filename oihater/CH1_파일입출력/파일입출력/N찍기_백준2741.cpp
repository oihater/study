#include <iostream>
int main()
{
	int input;
	std::cin >> input;
	for (int i = 0; i<input; i++)
	{
		std::cout << i + 1 << '\n';
	}

	return 0;
}