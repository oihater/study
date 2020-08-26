#include <iostream>
using namespace std;
int DP[1000001];
// Top down
int sol(int n)
{
	if (n == 1)
		return 0;
	if (DP[n] > 0)
		return DP[n];
	DP[n] = sol(n-1) + 1;
	if (n % 2 == 0)
	{
		int temp = sol(n / 2) + 1;
		if (DP[n] > temp)
			DP[n] = temp;
	}
	if (n % 3 == 0)
	{
		int temp = sol(n / 3) + 1;
		if (DP[n] > temp)
			DP[n] = temp;
	}
	return DP[n];
}


int main()
{
	int N;
	cin >> N;
	cout << sol(N) << endl;
	return 0;
}

/*
Bottom up
int d[1000001];
int main() {
    int n;
    cin >> n;
    d[1] = 0;
    for (int i=2; i<=n; i++) {
        d[i] = d[i-1] + 1;
        if (i%2 == 0 && d[i] > d[i/2] + 1) {
            d[i] = d[i/2] + 1;
        }
        if (i%3 == 0 && d[i] > d[i/3] + 1) {
            d[i] = d[i/3] + 1;
        }
    }
    cout << d[n] << '\n';
    return 0;
}


*/