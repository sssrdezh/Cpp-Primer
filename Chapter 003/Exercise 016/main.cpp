/*
	练习:3.16：编写一段程序，把练习3.13中vector对象的容量和具体内容输出出来。
	检验你之前的回答是否正确，如果不对，回过头重新学习3,3,1节（第87页）直到
	弄明白错在何处为止。
*/
#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::vector;
using std::string;

vector<int> v1;	// 元素数量：0
vector<int> v2(10);	// 元素数量：10，值：0
vector<int> v3(10, 42);	// 元素数量：10，值：42
vector<int> v4{ 10 };	// 元素数量：1，值：10
vector<int> v5{ 10,42 };	// 元素数量：2，值10,42
vector<string> v6{ 10 };	// 元素数量：10，值：空
vector<string> v7{ 10,"hi" };	// 元素数量：10，值："hi"

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