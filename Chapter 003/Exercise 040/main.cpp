/*
	练习3.40：编写一段程序，定义两个字符数组并用字符串字面值初始化它们；
	接着再定义一个字符数组存放前两个数组连接后的结果。使用strcpy和strcat
	把前两个数组的内容拷贝到第三个数组中。
*/
#include <iostream>
#include <cstring>

using namespace std;
int main()
{
	char s1[] = "hello ";
	char s2[] = "world";
	char s3[100];
	strcpy_s(s3, s1);
	strcat_s(s3, s2);
	cout << s3 << endl;
}


