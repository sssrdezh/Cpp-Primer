/*
	练习3.9：下面的程序有何作用？它合法吗？如果不合法，为什么？
*/
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
int main()
{
	string s;
	cout << s[0] << endl;
	return 0;
}

/*
	字符串s没有初始化，所以s为空，不存在s的首字符。因此非法。
*/