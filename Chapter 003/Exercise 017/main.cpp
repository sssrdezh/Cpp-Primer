/*
	��ϰ3.17����cin����һ��ʲ������Ǵ���һ��vector����Ȼ���跨�����дʶ���Ϊ��д��ʽ��
	����ı��Ľ����ÿ����ռһ�С�
*/
#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<string> svec;
	string s;
	while (cin >> s)
	{
		svec.push_back(s);
	}
	if (svec.size() > vector<string>::size_type(0))
	{
		for (auto &str : svec)
		{
			for (auto &c : str)
			{
				c = toupper(c);
			}
			cout << str << endl;
		}
		
	}
	return 0;
}
