/*
	��ϰ3.8���ֱ���whileѭ����forѭ����д3.6�ĳ���������ʽ���ã�
*/
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
int main()
{
	string s1 = "ABCDEFG";
	string s2 = "ABCDEFG";
	int i = 0;
	while (s1[i])
	{
		s1[i++] = 'X';
	}
	cout << s1 << endl;
	for (int i = 0; i < s2.size(); i++)
	{
		s2[i] = 'X';
	}
	cout << s2 << endl;
	return 0;
}