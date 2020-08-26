#include <iostream>

int main()
{
	int c;
	int num1, num2;
	std::cin >> c;
	int *arr = new int[2 * c];
	for (int i = 0; i<c; i++)
	{
		std::cin >> num1 >> num2;
		arr[2 * i] = num1;
		arr[2 * i + 1] = num2;
	}
	for (int j = 0; j<c; j++)
	{
		std::cout << "Case #" << j + 1 << ": " << arr[2 * j] << " + " << arr[2 * j + 1] << " = " << arr[2 * j] + arr[2 * j + 1] << std::endl;
	}
	delete[] arr;
	return 0;
}