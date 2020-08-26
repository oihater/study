#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num1, num2, num3, num4, n1, n2;
	cin >> num1 >> num2 >> num3 >> num4;
	n1 = num1 + num2;
	n2 = num3 + num4;
	cout << stoi(n1) + stoi(n2);

	return 0;
}