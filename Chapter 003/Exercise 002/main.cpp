/*
 *	练习3.2：编写一段程序从标准输入中一次读入一整行，然后修改该程序使其一次读入一个词。
*/

#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	string s;
//	while (getline(cin,s))	// 一次读入一整行
	while(cin >> s)	// 一次读入一个词
	{
		cout << s << endl;
	}
	return 0;
}