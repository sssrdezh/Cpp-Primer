/*
	练习3.37：下面的程序是何含义，程序的输出结果是什么？
*/
#include <iostream>
using namespace std;
int main()
{
	const char ca[] = { 'h','e','l','l','o' };
	const char *cp = ca;
	while (*cp)
	{
		cout << *cp << endl;
		++cp;
	}
}
/*
	每行一个字母，打印ca[]中的元素。
	因为ca[]没有以'\0'结尾，因此会打印内存中ca之后第一个'\0'为止。
*/