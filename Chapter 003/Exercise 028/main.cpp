/*
	练习3.28：:下列数组中元素的值是什么？
*/
#include <string>
using std::string;

string sa[10]; // 10个""
int ia[10]; //10个0
int main()
{
	string sa2[10]; //10个""
	int ia2[10]; // 10个未定义值
	return 0;
}

/*
	string类型本身接受无参数的初始化方式，无论数组定义在函数之外或者函数之内都默认初始化为空串；
	int类型，定义在函数之外初始化为0，定义在函数之内，未初始化则值为未定义值。
*/