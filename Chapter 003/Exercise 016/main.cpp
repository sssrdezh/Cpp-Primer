/*
	��ϰ:3.16����дһ�γ��򣬰���ϰ3.13��vector����������;����������������
	������֮ǰ�Ļش��Ƿ���ȷ��������ԣ��ع�ͷ����ѧϰ3,3,1�ڣ���87ҳ��ֱ��
	Ū���״��ںδ�Ϊֹ��
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
	// print v1
	cout << "v1: ";
	if (v1.size() > vector<int>::size_type(0))
	{
		for (auto i : v1)
			cout << i << " ";
	}
	cout << endl;
	//print v2
	cout << "v2: ";
	if (v2.size() > vector<int>::size_type(0))
	{
		for (auto i : v2)
			cout << i << " ";
	}
	cout << endl;
	//print v3
	cout << "v3: ";
	if (v3.size() > vector<int>::size_type(0))
	{
		for (auto i : v3)
			cout << i << " ";
	}
	cout << endl;
	//print v4
	cout << "v4: ";
	if (v4.size() > vector<int>::size_type(0))
	{
		for (auto i : v4)
			cout << i << " ";
	}
	cout << endl;
	//print v5
	cout << "v5: ";
	if (v5.size() > vector<int>::size_type(0))
	{
		for (auto i : v5)
			cout << i << " ";
	}
	cout << endl;
	//print v6
	cout << "v6: ";
	if (v6.size() > vector<string>::size_type(0))
	{
		for (auto i : v6)
			cout << i << " ";
	}
	cout << endl;
	//print v7
	cout << "v7: ";
	if (v7.size() > vector<string>::size_type(0))
	{
		for (auto i : v7)
			cout << i << " ";
	}
	cout << endl;
 	return 0;
}