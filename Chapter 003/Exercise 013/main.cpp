/*
	��ϰ3.13�����е�vector������������ٸ�Ԫ�أ���ЩԪ�ص�ֵ�ֱ��Ƕ��٣�
*/

#include <vector>
#include <string>
using std::vector;
using std::string;

vector<int> v1;	// Ԫ��������0
vector<int> v2(10);	// Ԫ��������10��ֵ��0
vector<int> v3(10, 42);	// Ԫ��������10��ֵ��42
vector<int> v4{ 10 };	// Ԫ��������1��ֵ��10
vector<int> v5{ 10,42 };	// Ԫ��������2��ֵ10,42
vector<string> v6{ 10 };	// Ԫ��������10��ֵ����
vector<string> v7{ 10,"hi" };	// Ԫ��������10��ֵ��"hi"