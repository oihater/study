#include <iostream>

int main()
{
	int rep;
	int num1, num2;
	std::cin >> rep;
	int *arr = new int[rep];

	for (int i = 0; i<rep; i++)
	{
		std::cin >> num1 >> num2;
		arr[i] = num1 + num2;
		std::cout << arr[i] << std::endl;
	}


	delete[] arr;
	return 0;
}