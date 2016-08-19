/*
	练习3.42：编写一段程序，将含有整数元素的vector对象拷贝给一个整型数组。
*/
#include <vector>
using namespace std;

int main()
{
	vector<int> ivec = { 1,2,3,4,5 };
	int ia[5];
	for (int i = 0; i < 5; i++)
	{
		ia[i] = ivec[i];
	}
	return 0;
}