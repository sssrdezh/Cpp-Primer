/*
	��ϰ3.5����дһ�γ���ӱ�׼�����ж������ַ�����������������һ���������
	�ɵĴ��ַ�����Ȼ���޸����������ÿո������Ķ���ַ����ָ����
*/

#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	string s, t;
	cin >> s;
	while (cin >> t)
	{
		//s += t;
		s += " " + t;
	}
	cout << s << endl;
	return 0;
}