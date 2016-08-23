/*
	练习4.4：在下面的表达式中添加括号，说明其求值的过程及最终结果。
	编写程序编译该（不加括号的）表达式并输出其结果验证之前的推断。
*/
#include <iostream>
using namespace std;

int main()
{
	int a = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
	int b = ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}