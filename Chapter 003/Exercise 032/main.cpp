/*
	��ϰ3.32������һ��ոմ��������鿽��������һ�����顣����vector��д����ʵ�����ƵĹ��ܡ�
*/
#include <vector>
using std::vector;
constexpr size_t array_size = 10;
int a[array_size];
int b[array_size];
vector<int> a_vec, b_vec;
int main()
{
	for (size_t i = 0; i < array_size; i++)
	{
		a[i] = i;
	}
	for (size_t i = 0; i < array_size; i++)
	{
		b[i] = a[i];
	}

	for (size_t i = 0; i < 10; i++)
	{
		a_vec.push_back(i);
	}
	for (size_t i = 0; i < 10; i++)
	{
		b_vec.push_back(a_vec[i]);
	}
	return 0;
}