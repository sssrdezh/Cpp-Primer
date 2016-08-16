/*
	练习3.17：从cin读入一组词并把它们存入一个vector对象，然后设法把所有词都改为大写形式。
	输出改变后的结果，每个词占一行。
*/
#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<string> svec;
	string s;
	while (cin >> s)
	{
		svec.push_back(s);
	}
	if (svec.size() > vector<string>::size_type(0))
	{
		for (auto &str : svec)
		{
			for (auto &c : str)
			{
				c = toupper(c);
			}
			cout << str << endl;
		}
		
	}
	return 0;
}
