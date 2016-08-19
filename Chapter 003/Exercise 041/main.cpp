/*
	练习3.41：编写一段程序，用整型数组初始化一个vector对象。
*/
#include <vector>
using namespace std;

int main()
{
	int ia[] = { 1,2,3,4,5 };
	vector<int> ivec(begin(ia), end(ia));
	return 0;
	
}