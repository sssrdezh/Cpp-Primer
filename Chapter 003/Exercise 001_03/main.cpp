/*
*	��ϰ3.1��ʹ��ǡ����using��������1.4.1�ڣ���11ҳ����2.6.2�ڣ���67ҳ������ϰ��
*/

/*
 *	��ϰ1.11����д������ʾ�û�����������������ӡ��������������ָ����Χ�ڵ�����������
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
	int v1, v2;
	cout << "Please input two numbers." << endl;
	cin >> v1 >> v2;
	if (v1 < v2)
	{
		while (v1 < v2)
		{
			cout << v1 << " ";
			++v1;
		}
	}
	else
	{
		while (v1 > v2)
		{
			cout << v1 << " ";
			--v1;
		}
	}
	cout << v1 << endl;
	return 0;
}