#include <iostream>
int main()
{
	int input;
	std::cin >> input;
	int *arr = new int[input];
	for (int i = 0; i < input; i++)
	{
		std::cin >> arr[i];
	}

	int min = arr[0];
	int max = arr[0];
	for (int j = 0; j < input; j++)
	{
		if (arr[j] > max)
		{
			max = arr[j];
		}
		else if (arr[j] < min)
		{
			min = arr[j];
		}
	}
	std::cout << min << " " << max;
	delete[] arr;
	return 0;
}