#include <iostream>
using namespace std;

int main()
{
	int input, sum;
	sum = 0;
	char arr[100];

	cin >> input;

	for (int i = 0; i < input; i++)
	{
		cin >> arr[i];
		sum += (arr[i] - '0');
	}
	cout << sum << endl;

	return 0;
}