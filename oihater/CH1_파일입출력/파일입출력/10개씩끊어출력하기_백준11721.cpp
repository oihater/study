#include <iostream>
using namespace std;

int main()
{
	char arr[100];
	cin >> arr;
	int i;
	for (i = 0; i<100; i++)
	{
		if (arr[i] == '\0')
			break;
	}

	for (int j = 0; j<i; j++)
	{
		cout << arr[j];
		if ((j + 1) % 10 == 0)
			cout << endl;
	}
	cout << endl;
	return 0;
}