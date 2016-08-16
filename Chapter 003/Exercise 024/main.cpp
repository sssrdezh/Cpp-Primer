/*
	练习3.24：请使用迭代器重做3.3.3节（第94页的最后一个练习）。
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> ivec;
	int num;
	while (cin >> num)
		ivec.push_back(num);
	auto beg = ivec.begin();
	auto end = ivec.end();
	for (auto it = beg; it < end - 1; it += 2)
	{
		cout << (*it) + (*(it + 1)) << " ";
	}
	cout << endl;
	for (auto it = beg; it < beg + (end - beg) / 2; it++)
	{
		cout << (*it) + (*(end - 1 - (it - beg))) << " ";
	}
	cout << endl;
	return 0;
}