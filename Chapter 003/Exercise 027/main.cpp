/*
	练习3.27：假设txt_size是一个无参数的函数，它的返回值时int。请回答下列哪个定义是非法的？为什么？
*/

int txt_size()
{
	return 100;
}
int main()
{
	unsigned int buf_size = 1024;
	//int ia[buf_size];	// 非法，变量不能作为数组的维度。
	//int ia[4 * 7 - 14]; // 合法。
	//int ia[txt_size()]; // 非法，txt_size()的返回值是int类型，非constexpr,不能作为数组的维度
	//char st[11] = "fundamental"; // 非法，数组的维度为11，字符串长度为12，超出了数组的维度。
	return 0;
}