#include <iostream>
#include <algorithm>
using namespace std;
int dp[2][100001] = {0}; // 점수 최댓값
int stk[2][100001] = { 0 }; // 각 위치 별 스티커 점수

int main()
{
	int test, n;
	
	cin >> test;
	
	for (int i = 1; i <= test; i++)
	{
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> stk[0][j];
		}
		for (int k = 0; k < n; k++)
		{
			cin >> stk[1][k];
		}

		dp[0][0] = stk[0][0];
		dp[1][0] = stk[1][0];
		dp[0][1] = stk[0][1] + dp[1][0];
		dp[1][1] = stk[1][1] + dp[0][0];

		for (int l = 2; l <= n; l++)
		{
			dp[0][l] = max(dp[1][l - 1], dp[1][l - 2]) + stk[0][l];
			dp[1][l] = max(dp[0][l - 1], dp[0][l - 2]) + stk[1][l];

		}
		cout << max(dp[0][n - 1], dp[1][n - 1]) << "\n";
	}
	return 0;
}