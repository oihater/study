#include <iostream>
#include <string>
using namespace std;

int main()
{
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	string day[7] = { "SUN", "MON", "TUE","WED", "THU", "FRI", "SAT" };
	int m, d;
	int days = 0;
	cin >> m >> d;

	if (m == 1)
	{
		days += d;
	}

	else if (m>1)
	{
		for (int i = 0; i < m - 1; i++)
		{
			days += month[i];
		}
		days += d;
	}
	cout << day[days % 7] << endl;

	return 0;
}

