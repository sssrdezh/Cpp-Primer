/*
 *	��ϰ3.1��ʹ��ǡ����using��������1.4.1�ڣ���11ҳ����2.6.2�ڣ���67ҳ������ϰ��
*/

/*
 *	��ϰ1.9����д����ʹ��whileѭ����50��100��������ӡ�
*/
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int i = 50;
	int sum = 0;
	while (i <= 100)
	{
		sum += i;
		++i;
	}
	cout << "The sum of 50 to 100 is " << sum << endl;
	return 0;
}