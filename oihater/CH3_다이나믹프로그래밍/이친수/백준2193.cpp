#include <iostream>
using namespace std;
long d[91][2] = {0,};
int main()
{
	int n;
	cin >> n;
	d[1][0] = 0;
	d[1][1] = 1;
	for (int i = 2; i <= n; i++)
	{
		d[i][0] = d[i - 1][0] + d[i-1][1];
		d[i][1] = d[i - 1][0];
	}
	long ans;
	ans = d[n][0] + d[n][1];
	cout << ans << "\n";

	return 0;
}

/*
1차원 배열로 풀기
#include <iostream>
using namespace std;
long long d[91];	
int main() {
	int n;
	cin >> n;
	d[1] = 1; 
	d[2] = 1;
	for (int i=3; i<=n; i++) {
		d[i] = d[i-1] + d[i-2]; // d[n-1][1] = d[n-2][0] -> d[n][0] = d[n-1][0] + d[n-2][0] -> d[n]=d[n-1]+d[n-2]
	}
	cout << d[n] << '\n';
	return 0;
}
*/