/*
	��ϰ3.39����дһ�γ��򣬱Ƚ�����string�����ٱ�дһ�γ��򣬱Ƚ�����C����ַ��������ݡ�
*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
string s1 = "123456";
string s2 = "12345";

const char c1[] = "123456";
const char c2[] = "12345";
int main()
{
	if (s1 > s2)
		cout << "s1 > s2" << endl;
	else if (s1 < s2)
		cout << "s1 < s2" << endl;
	else
		cout << "s1 = s2" << endl;

	int answer;
	answer = strcmp(c1, c2);
	switch (answer)
	{
	case 1:
		cout << "c1 > c2" << endl;
		break;
	case -1:
		cout << "c1 < c2" << endl;
		break;
	case 0:
		cout << "c1 = c2" << endl;
	default:
		break;
	}
	return 0;
}