/*
	��ϰ3.37������ĳ����Ǻκ��壬�������������ʲô��
*/
#include <iostream>
using namespace std;
int main()
{
	const char ca[] = { 'h','e','l','l','o' };
	const char *cp = ca;
	while (*cp)
	{
		cout << *cp << endl;
		++cp;
	}
}
/*
	ÿ��һ����ĸ����ӡca[]�е�Ԫ�ء�
	��Ϊca[]û����'\0'��β����˻��ӡ�ڴ���ca֮���һ��'\0'Ϊֹ��
*/