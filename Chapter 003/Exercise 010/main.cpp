/*
	��ϰ3.10����дһ�γ��򣬶���һ�����������ŵ��ַ�������������ȥ��������ַ���ʣ��Ĳ��֡�
*/
#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string s;
	cin >> s;
	for (auto c : s)
	{	
		if (!ispunct(c))
			cout << c;
	}
	cout << endl;
	return 0;
}