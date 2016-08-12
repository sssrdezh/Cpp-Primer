/*
 *	练习3.1：使用恰当的using声明重做1.4.1节（第11页）和2.6.2节（第67页）的练习。
*/

/*
 *	练习1.9：编写程序，使用while循环将50到100的整数相加。
*/
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int i = 50;
	int sum = 0;
	while (i <= 100)
	{
		sum += i;
		++i;
	}
	cout << "The sum of 50 to 100 is " << sum << endl;
	return 0;
}