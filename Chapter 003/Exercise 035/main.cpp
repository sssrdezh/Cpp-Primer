/*
	练习3.35：编写一段程序，利用指针将数组中的元素置为0。
*/
using namespace std;
int main()
{
	int ia[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (auto &i : ia)
		i = 0;
	return 0;
}