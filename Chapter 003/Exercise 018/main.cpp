/*
	练习3.18：下面的程序合法吗？如果不合法，你准备如何修改？
*/
#include <vector>
using std::vector;

int main()
{
	vector<int> ivec;
	//ivec[0] = 42; // 非法。此时ivec为空，不存在下表为0的元素，不能为其下表为0的元素赋值。
	ivec.push_back(42);
	return 0;
}
