/*
	��ϰ3.20������һ�������������Ǵ���һ��vector���󣬽�ÿ�����������ĺ����������
	��д��ĳ������Ҫ���������һ�������һ��Ԫ�صĺͣ���������ڶ����͵����ڶ���Ԫ�صĺͣ��Դ����ơ�
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