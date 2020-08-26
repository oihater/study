#include <iostream>
using namespace std;
int d[11];
int main()
{
	//Bottom up
	int T, n;
	cin >> T;
	d[1] = 1;
	d[2] = 2;
	d[3] = 4;
	for (int i = 0; i < T; i++)
	{
		cin >> n;
		for (int j = 4; j <= n; j++)
		{
			d[j] = d[j - 1] + d[j - 2] + d[j - 3];
		}
		cout << d[n] << "\n";
	}

	return 0;
}