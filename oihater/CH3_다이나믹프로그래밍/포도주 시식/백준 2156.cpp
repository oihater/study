#include <iostream>
#include <vector>
using namespace std;

int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int dp[10001] = { 0 }; //n회까지 최대 얼마 마셨는지
int main()
{
	int n = 0;
	cin >> n;
	vector<int> wine = {0};
	wine[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		int vol;
		cin >> vol;
		wine.push_back(vol);
	}
	dp[1] = wine[1];
	dp[2] = wine[1] + wine[2];
	for (int j = 3; j <= n; j++)
	{
		dp[j] = max(dp[j - 3] + wine[j - 1] + wine[j], dp[j - 2] + wine[j]); // n번째 잔 마실 때
		dp[j] = max(dp[j], dp[j - 1]); // n번째 안 마실 때 -> dp[n]=dp[n-1] 과 비교
	}

	cout << dp[n]<<"\n";

	return 0;
}