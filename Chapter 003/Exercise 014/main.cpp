/*
	��ϰ3.14����дһ�γ�����cin����һ�������������Ǵ���һ��vector����
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