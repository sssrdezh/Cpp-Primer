/*
	��ϰ3.19������붨��һ������10��Ԫ�ص�vector��������Ԫ�ص�ֵ����42��
	���оٳ����ֲ�ͬ��ʵ�ַ��������ַ��������أ�Ϊʲô��
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> ivec1(10, 42);
	vector<int> ivec2{ 42, 42, 42, 42, 42, 42, 42, 42, 42,42 };
	vector<int> ivec3;
	for (int i = 0; i < 10; i++)
	{
		ivec3.push_back(42);
	}
	return 0;
}