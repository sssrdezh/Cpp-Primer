/*
	��ϰ3.22���޸�֮ǰ�Ǹ����text��һ�εĳ������Ȱ�text�ĵ�һ��ȫ����д�ɴ�д��ʽ��Ȼ�����������
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<string> svec;
	string s;
	while (cin >> s)
	{
		svec.push_back(s);
	}
	for (auto it = svec.begin(); it != svec.end() && !(*it).empty(); it++)
	{
		for (auto it2 = (*it).begin(); it2!=(*it).end();it2++)
		{
			(*it2) = toupper(*it2);
		}
		cout << (*it);
	}
	cout << endl;
	return 0;
}