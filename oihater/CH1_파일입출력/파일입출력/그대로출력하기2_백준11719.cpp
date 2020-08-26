#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str[100];
	for (int i = 0; i < 100; i++)
	{
		getline(cin, str[i]);
		if (str[i].length() > 100)
			break;
		cout << str[i] << endl;
	}

	return 0;
}