#include <iostream>
int main()
{
	int n;
	std::cin >> n;

	for (int i = 0; i<n; i++)
	{
		int j = 0;
		while (j <= i)
		{
			std::cout << "*";
			j++;
		}
		std::cout << std::endl;
	}
	return 0;
}