/*
	练习3.25:3.3.3节（第93页）划分分数段的程序是使用下表运算符实现的，请利用迭代器改写该程序并实现完全相同的功能。
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<unsigned> scores(11, 0);
	auto it = scores.begin();
	unsigned grade;
	while (cin >> grade)
	{
		if (grade <= 100)
		{
			(*(it + grade / 10))++;
		}
	}
	for (it = scores.begin(); it != scores.end(); it++)
	{
		cout << (*it) << " ";
	}
	cout << endl;
	return 0;
}
