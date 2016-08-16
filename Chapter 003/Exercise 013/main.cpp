/*
	练习3.13：下列的vector对象各包含多少个元素？这些元素的值分别是多少？
*/

#include <vector>
#include <string>
using std::vector;
using std::string;

vector<int> v1;	// 元素数量：0
vector<int> v2(10);	// 元素数量：10，值：0
vector<int> v3(10, 42);	// 元素数量：10，值：42
vector<int> v4{ 10 };	// 元素数量：1，值：10
vector<int> v5{ 10,42 };	// 元素数量：2，值10,42
vector<string> v6{ 10 };	// 元素数量：10，值：空
vector<string> v7{ 10,"hi" };	// 元素数量：10，值："hi"