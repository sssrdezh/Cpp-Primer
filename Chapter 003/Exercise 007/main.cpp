/*
	练习3.7：就上一题完成的程序而言，如果将循环控制变量的类型设为char将发生什么？
*/
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
int main()
{
	string s = "ABCDEFG";
	for (char &c : s)
	{
		c = 'X';
	}
	cout << s << endl;
	return 0;
}