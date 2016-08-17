/*
	练习3.31：编写一段程序，定义一个含有10个int的数组，令每个元素的值就是其所在位置的值。
*/
#include <cstddef>
constexpr size_t array_size = 10;
int a[array_size];
int main()
{
	for (size_t i = 0; i < array_size; i++)
	{
		a[i] = i;
	}
	return 0;
}