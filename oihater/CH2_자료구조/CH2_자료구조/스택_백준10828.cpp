#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
	int len, num, size;
	string cmd;
	cin >> len;
	vector<int> stack;

	for (int i = 0; i < len; i++)
	{
		cin >> cmd;
		if (cmd == "push")
		{
			cin >> num;
			stack.push_back(num);
		}
		else if (cmd == "pop")
		{
			if (stack.empty())
				cout << -1 << endl;
			else
			{
				cout << stack.back() << endl;
				stack.pop_back();
			}
		}
		else if (cmd == "top")
		{
			if (stack.empty())
				cout << -1 << endl;
			else
				cout << stack.back() << endl;
		}
		else if (cmd == "empty")
		{
			if (stack.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (cmd == "size")
			cout << stack.size() << endl;

	}

	return 0;
}