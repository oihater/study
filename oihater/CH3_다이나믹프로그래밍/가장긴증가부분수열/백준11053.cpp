#include <iostream>
#include <vector>
using namespace std;
int dp[1001] =  {0};
int main()
{
	int n;
	cin >> n;
	vector <int> arr = {0};
	dp[0] = 0;
	arr[0] = 0;
	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		int num;
		cin >> num;
		arr.push_back(num);
	}
	for (int j = 1; j <= n; j++)
	{
		if (arr[j] > arr[j - 1])
		{
			cnt ++;
			dp[j] = cnt;
		}
	}
	cout << dp[n] << "\n";
	return 0;
}