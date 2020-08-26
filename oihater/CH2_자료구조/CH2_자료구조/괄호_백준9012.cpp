#include <iostream>
#include <string>
#include <list>
#include <vector>
using namespace std;


int main()
{
	int len;
	vector<char> cmd;
	string br;
	cin >> len;

	for (int i = 0; i < len; i++)
	{
		int yn = 2;
		cin >> br;
		while (br != "")
		{
			cmd.push_back(br[0]);
			br.erase(0, 1);
		}
		int cnt = 0;
		for (int j = 0; j<cmd.size(); j++)
		{
			if (cmd.at(j) == '(')
				cnt++;
			else if (cmd.at(j) == ')')
				cnt--;
			if (cnt < 0)
			{
				yn = 0;
				break;
			}
		}
		if (cnt > 0)
			yn = 2;
		else if (cnt == 0)
			yn = 1;
		else
			yn = 0;

		if (yn == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		cmd.clear();
	}

	return 0;
}