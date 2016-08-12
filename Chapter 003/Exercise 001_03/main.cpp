/*
*	练习3.1：使用恰当的using声明重做1.4.1节（第11页）和2.6.2节（第67页）的练习。
*/

/*
 *	练习1.11：编写程序，提示用户输入两个整数，打印出这两个整数所指定范围内的所有整数。
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
	int v1, v2;
	cout << "Please input two numbers." << endl;
	cin >> v1 >> v2;
	if (v1 < v2)
	{
		while (v1 < v2)
		{
			cout << v1 << " ";
			++v1;
		}
	}
	else
	{
		while (v1 > v2)
		{
			cout << v1 << " ";
			--v1;
		}
	}
	cout << v1 << endl;
	return 0;
}