/*
	练习3.11：下面的范围for语句合法吗？如果合法，c的类型是什么？
*/
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
int main()
{
	const string s = "Keep out!";
	for (auto &c : s)
	{
		cout << c;
	}
	cout << endl;
	return 0;
}
/*
	如果不修改c引用的值，合法，c的；类型为const char &.
*/