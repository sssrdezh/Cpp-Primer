/*
	练习4.5：写出下列表达式的求值结果。
	(a) -30 * 3 + 21 / 5
	(b) -30 + 3 * 21 / 5
	(c) 30 / 3 * 21 % 5
	(d) -30 / 3 * 21 % 4
*/
#include <iostream>
using namespace std;
int main()
{
	int a = -30 * 3 + 21 / 5;
	int b = -30 + 3 * 21 / 5;
	int c = 30 / 3 * 21 % 5;
	int d = -30 / 3 * 21 % 4;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	return 0;
}