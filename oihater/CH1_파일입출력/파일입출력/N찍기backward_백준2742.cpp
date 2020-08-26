#include <iostream>
int main()
{
	int input;
	std::cin >> input;
	for (int i = 0; i<input; i++)
	{
		std::cout << input - i << '\n';
	}
	return 0;
}