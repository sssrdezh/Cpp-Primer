/*
	练习3.30：指出下面代码中的索引错误。
*/
#include <cstddef>
constexpr size_t array_size = 10;
int ia[array_size];
int main()
{
	for (size_t ix = 1; ix <= array_size; ix++) // ix <= array_size 错误，超出数组边界
	{
		ia[ix] = ix;
	}
	return 0;
}