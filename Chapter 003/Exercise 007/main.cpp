/*
	��ϰ3.7������һ����ɵĳ�����ԣ������ѭ�����Ʊ�����������Ϊchar������ʲô��
*/
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
int main()
{
	string s = "ABCDEFG";
	for (char &c : s)
	{
		c = 'X';
	}
	cout << s << endl;
	return 0;
}