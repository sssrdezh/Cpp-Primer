/*
	��ϰ3.21����ʹ�õ���������3.3.3�ڣ���94ҳ���ĵ�һ����ϰ��
*/
#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::vector;
using std::string;

vector<int> v1;	// Ԫ��������0
vector<int> v2(10);	// Ԫ��������10��ֵ��0
vector<int> v3(10, 42);	// Ԫ��������10��ֵ��42
vector<int> v4{ 10 };	// Ԫ��������1��ֵ��10
vector<int> v5{ 10,42 };	// Ԫ��������2��ֵ10,42
vector<string> v6{ 10 };	// Ԫ��������10��ֵ����
vector<string> v7{ 10,"hi" };	// Ԫ��������10��ֵ��"hi"

int main()
{
	cout << "v1: ";
	if (v1.cbegin()!=v1.cend())
	{
		for (auto it = v1.cbegin(); it != v1.cend(); it++)
		{
			cout << *it << " ";
		}

	}
	cout << endl;

	cout << "v2: ";
	if (v2.cbegin() != v2.cend())
	{
		for (auto it = v2.cbegin(); it != v2.cend(); it++)
		{
			cout << *it << " ";
		}
	}
	cout << endl;

	cout << "v3: ";
	if (v3.cbegin() != v3.cend())
	{
		for (auto it = v3.cbegin(); it != v3.cend(); it++)
		{
			cout << *it << " ";
		}
	}
	cout << endl;

	cout << "v4: ";
	if (v4.cbegin() != v4.cend())
	{
		for (auto it = v4.cbegin(); it != v4.cend(); it++)
		{
			cout << *it << " ";
		}
	}
	cout << endl;

	cout << "v5: ";
	if (v5.cbegin() != v5.cend())
	{
		for (auto it = v5.cbegin(); it != v5.cend(); it++)
		{
			cout << *it << " ";
		}
	}
	cout << endl;

	cout << "v6: ";
	if (v6.cbegin() != v6.cend())
	{
		for (auto it = v6.cbegin(); it != v6.cend(); it++)
		{
			cout << *it << " ";
		}
	}
	cout << endl;

	cout << "v7: ";
	if (v7.cbegin() != v7.cend())
	{
		for (auto it = v7.cbegin(); it != v7.cend(); it++)
		{
			cout << *it << " ";
		}
	}
	cout << endl;
	return 0;
}