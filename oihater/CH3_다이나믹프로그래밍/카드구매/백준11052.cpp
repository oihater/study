#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int d[1001];
int main()
{
	int n;
	cin >> n;
	vector<int> v(n+1);
	v[0] = 0;
	
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			d[i] = max(d[i], d[i - j] + v[j]);
		}
	}
	cout << d[n] << "\n";

	return 0;
}