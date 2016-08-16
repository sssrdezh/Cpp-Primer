/*
	练习3.20：读入一组整数并把它们存入一个vector对象，将每对相邻整数的和输出出来。
	改写你的程序，这次要求先输出第一个和最后一个元素的和，接着输出第二个和倒数第二个元素的和，以此类推。
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> ivec;
	int num, sum = 0;
	decltype(ivec.size()) size;
	while (cin >> num)
		ivec.push_back(num);
	size = ivec.size();
	for (decltype(ivec.size()) i = 0; i < size - 1; i += 2)
	{
		cout << ivec[i] + ivec[i + 1] << " ";
	}
	cout << endl;
	
	for (decltype(ivec.size()) i = 0; i <= size - i; i++)
		cout << ivec[i] + ivec[size - 1 - i] << " ";
	cout << endl;
	return 0;
}