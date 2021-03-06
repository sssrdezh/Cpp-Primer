/*
	练习3.3：请说明string类的输入运算符和getline函数分别是如何处理空白字符的。
*/

/*
	输入运算符：执行读取操作时，string对象会自动忽略开头的空白（即空格符、换行符、制表符等）
	并从第一个真正的字符开始读起，直到遇见下一处空白为止。
	getline函数：函数从给定的输入流中读入内容，直到遇到换行符为止（换行符也被读进来了），
	然后把所读的内容存到string对象中去（不存换行符）。只要一遇到换行符就结束读取并返回结果。
*/
