#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string S, temp;
	cin >> S;
	vector <string> v;
	for (int i = 0; i < S.length(); i++)
	{
		v.push_back(S.substr(i));
	}
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v.size(); j++)
		{
			if (v[i] < v[j])
			{
				temp = v[j];
				v[j] = v[i];
				v[i] = temp;
			}
		}
	}

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;

	return 0;
}