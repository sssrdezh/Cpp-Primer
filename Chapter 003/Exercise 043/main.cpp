/*
	练习3.43：编写3个不同版本的程序，令其均能输出ia的元素。
	版本1使用范围for语句管理迭代过程。
	版本2和版本3都使用普通的for语句，其中版本2要求用下标运算符，版本3要求用指针。
	此外，在所有3个版本的程序中都要直接写出数据类型，而不能使用类型别名、auto关键字或decltype关键字。
*/
#include <iostream>
using namespace std;
int main()
{
	int ia[3][4] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
	for (int (&row)[4] : ia)
		for (int &col : row)
			cout << col << " ";
	cout << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << ia[i][j] << " ";
		}
	}
	cout << endl;

	for (int (*p)[4] = ia; p < ia + 3; p++)
	{
		for (int *q = *p; q < *p + 4; q++)
		{
			cout << *q << " ";
		}
	}
	cout << endl;
	return 0;
}