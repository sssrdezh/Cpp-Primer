/*
	��ϰ3.40����дһ�γ��򣬶��������ַ����鲢���ַ�������ֵ��ʼ�����ǣ�
	�����ٶ���һ���ַ�������ǰ�����������Ӻ�Ľ����ʹ��strcpy��strcat
	��ǰ������������ݿ����������������С�
*/
#include <iostream>
#include <cstring>

using namespace std;
int main()
{
	char s1[] = "hello ";
	char s2[] = "world";
	char s3[100];
	strcpy_s(s3, s1);
	strcat_s(s3, s2);
	cout << s3 << endl;
}


