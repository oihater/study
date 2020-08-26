#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	char chr;
	getline(cin, str);
	for (int i = 0; i<str.length(); i++)
	{
		chr = str[i];
		if (islower(chr)) {
			if (chr + 13 > 122)
				chr = (chr + 13) - 26;
			else
				chr = chr + 13;
		}
		else if (isupper(chr)) {
			if (chr + 13 > 90)
				chr = (chr + 13) - 26;
			else
				chr = chr + 13;
		}
		cout << chr;
	}
	cout << "\n";
	return 0;
}