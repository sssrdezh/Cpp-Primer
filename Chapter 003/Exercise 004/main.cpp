/*
	练习3.4：编写一段程序读入两个字符串，比较其是否相等并输出结果。如果不相等，
	输出较大的那个字符串。改写上述程序，比较输入的两个字符串是否等长，如果不等长，
	输出长度较大的那个字符串。
*/
#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	if (s1 == s2)
	{
		cout << "The two strings are equal." << endl;
	}
	else
		cout << (s1 > s2 ? s1 : s2) << endl;
	if (s1.size() == s2.size())
	{
		cout << "The two strings have the same length." << endl;
	}
	else
		cout << (s1.size() > s2.size() ? s1 : s2) << endl;
	return 0;
}