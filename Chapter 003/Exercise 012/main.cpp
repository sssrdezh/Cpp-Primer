/*
	��ϰ3.12������vector����Ķ����в���ȷ��������У���ָ������������ȷ�ģ�
	������ִ�н�������ڲ���ȷ�ģ�˵��������ԭ��
*/
#include <vector>
#include <string>
using std::vector;
using std::string;

vector<vector<int>> ivec;	//��ȷ��������һ��vector����ivec����Ԫ����vector<int>����

vector<string> svec = ivec; // ���󣬲�����vector<int>��ʼ��vector<string>��

vector<string> svec(10, "null"); // ��ȷ��������һvector<string>����10��Ԫ�أ�ÿ��Ԫ�ض����ַ���"null"��