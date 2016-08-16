/*
	练习3.14：编写一段程序，用cin读入一组整数并把它们存入一个vector对象。
*/
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	int i;
	vector<int> ivec;
	while (cin >> i)
	{
		ivec.push_back(i);
	}
	for (auto & num: ivec)
	{
		cout << num << " ";
	}
	cout << endl;
	return 0;
}