/*
	��ϰ3.11������ķ�Χfor���Ϸ�������Ϸ���c��������ʲô��
*/
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
int main()
{
	const string s = "Keep out!";
	for (auto &c : s)
	{
		cout << c;
	}
	cout << endl;
	return 0;
}
/*
	������޸�c���õ�ֵ���Ϸ���c�ģ�����Ϊconst char &.
*/