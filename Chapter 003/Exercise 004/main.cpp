/*
	��ϰ3.4����дһ�γ�����������ַ������Ƚ����Ƿ���Ȳ����������������ȣ�
	����ϴ���Ǹ��ַ�������д�������򣬱Ƚ�����������ַ����Ƿ�ȳ���������ȳ���
	������Ƚϴ���Ǹ��ַ�����
*/
#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	if (s1 == s2)
	{
		cout << "The two strings are equal." << endl;
	}
	else
		cout << (s1 > s2 ? s1 : s2) << endl;
	if (s1.size() == s2.size())
	{
		cout << "The two strings have the same length." << endl;
	}
	else
		cout << (s1.size() > s2.size() ? s1 : s2) << endl;
	return 0;
}