/*
	��ϰ3.31����дһ�γ��򣬶���һ������10��int�����飬��ÿ��Ԫ�ص�ֵ����������λ�õ�ֵ��
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