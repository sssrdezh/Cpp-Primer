/*
	��ϰ3.30��ָ����������е���������
*/
#include <cstddef>
constexpr size_t array_size = 10;
int ia[array_size];
int main()
{
	for (size_t ix = 1; ix <= array_size; ix++) // ix <= array_size ���󣬳�������߽�
	{
		ia[ix] = ix;
	}
	return 0;
}