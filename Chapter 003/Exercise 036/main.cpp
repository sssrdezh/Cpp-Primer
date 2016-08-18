/*
	练习3.36：编写一段程序，比较两个数组是否相等。再写一段程序，比较两个vector是否相等。
*/
#include <cstddef>
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int ia1[] = { 1,2,3,4 };
int ia2[] = { 1,2,3,4 };
vector<int> ivec1 = { 1,2,3,4 };
vector<int> ivec2 = { 1,2,5,4 };
int main()
{
	ptrdiff_t length1 = end(ia1) - begin(ia1);
	ptrdiff_t length2 = end(ia2) - begin(ia2);
	if(length1 == length2)
	{ 
		int i = 0;
		while (ia1[i] == ia2[i] && i < length1)
			i++;
		if (i = length1)
			cout << "the two arrays are the same" << endl;
		else
			cout << "the two arrays are different" << endl;
	}
	else 
		cout << "the two arrays are different" << endl;

	if (ivec1.size() == ivec2.size())
	{
		auto it1 = ivec1.cbegin();
		auto it2 = ivec2.cbegin();
		while (it1 != ivec1.cend() && (*it1) == (*it2) )// 注意&&判断顺序
		{
			it1++;
			it2++;
		}
		if (it1 == ivec1.cend())
			cout << "the two vectors are the same" << endl;
		else
			cout << "the two vectors are different" << endl;
	}
	else
		cout << "the two arrays are different" << endl;
	return 0;
}