/*
	��ϰ3.43����д3����ͬ�汾�ĳ�������������ia��Ԫ�ء�
	�汾1ʹ�÷�Χfor������������̡�
	�汾2�Ͱ汾3��ʹ����ͨ��for��䣬���а汾2Ҫ�����±���������汾3Ҫ����ָ�롣
	���⣬������3���汾�ĳ����ж�Ҫֱ��д���������ͣ�������ʹ�����ͱ�����auto�ؼ��ֻ�decltype�ؼ��֡�
*/
#include <iostream>
using namespace std;
int main()
{
	int ia[3][4] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
	for (int (&row)[4] : ia)
		for (int &col : row)
			cout << col << " ";
	cout << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << ia[i][j] << " ";
		}
	}
	cout << endl;

	for (int (*p)[4] = ia; p < ia + 3; p++)
	{
		for (int *q = *p; q < *p + 4; q++)
		{
			cout << *q << " ";
		}
	}
	cout << endl;
	return 0;
}