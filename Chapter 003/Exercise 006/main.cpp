/*
	��ϰ3.6����дһ�γ���ʹ�÷�Χfor��佫�ַ����ڵ������ַ���X���档
*/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
int main()
{
	string s = "ABCDEFG";
	for (auto &c : s)
	{
		c = 'X';
	}
	cout << s << endl;
	return 0;
}