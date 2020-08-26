#include <iostream>
#include <string>
using namespace std;

int main()
{

	int input;
	cin >> input;

	char **star = new char *[2 * input - 1];
	for (int k = 0; k < 2 * input - 1; k++)
	{
		star[k] = new char[2 * input];
	}

	for (int i = 0; i < input; i++)
	{
		for (int l = 0; l < 2 * input; l++)
		{
			star[i][l] = ' ';
			star[2 * input - i - 2][l] = ' ';
		}


		for (int j = 0; j < i + 1; j++)
		{
			star[i][j] = '*';
			star[i][2 * input - j - 1] = '*';
			star[2 * input - i - 2][j] = '*';
			star[2 * input - i - 2][2 * input - j - 1] = '*';
		}
	}


	for (int m = 0; m < 2 * input - 1; m++)
	{
		for (int n = 0; n < 2 * input; n++)
		{
			cout << star[m][n];
		}
		cout << endl;
	}

	delete[] star;
	return 0;
}