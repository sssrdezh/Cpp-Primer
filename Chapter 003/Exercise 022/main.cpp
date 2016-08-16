/*
	练习3.22：修改之前那个输出text第一段的程序，首先把text的第一段全部改写成大写形式，然后再输出它。
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<string> svec;
	string s;
	while (cin >> s)
	{
		svec.push_back(s);
	}
	for (auto it = svec.begin(); it != svec.end() && !(*it).empty(); it++)
	{
		for (auto it2 = (*it).begin(); it2!=(*it).end();it2++)
		{
			(*it2) = toupper(*it2);
		}
		cout << (*it);
	}
	cout << endl;
	return 0;
}