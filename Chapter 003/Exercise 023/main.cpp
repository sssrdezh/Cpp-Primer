/*
	��ϰ3.23����дһ�γ��򣬴���һ������10��������vector����Ȼ��ʹ�õ�����������Ԫ�ص�ֵ����Ϊԭ������������
	���vector��������ݣ���������Ƿ���ȷ��
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> ivec = { 1,2,3,4,5,6,7,8,9,10 };
	for (auto it = ivec.begin(); it != ivec.end(); it++)
	{
		(*it) *= 2;
		cout << (*it) << " ";
	}
	cout << endl;
	return 0;
}