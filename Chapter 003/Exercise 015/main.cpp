/*
	��ϰ3.15����д����ĳ��򣬲�����ζ�������ַ�����
*/
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	string s;
	vector<string> svec;
	while (cin >> s)
	{
		svec.push_back(s);
	}
	for (auto & str: svec)
	{
		cout << str << " ";
	}
	cout << endl;
	return 0;
}