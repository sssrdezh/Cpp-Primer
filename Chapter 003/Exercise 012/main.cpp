/*
	练习3.12：下列vector对象的定义有不正确的吗？如果有，请指出来。对于正确的，
	描述其执行结果；对于不正确的，说明其错误的原因。
*/
#include <vector>
#include <string>
using std::vector;
using std::string;

vector<vector<int>> ivec;	//正确，定义了一个vector对象ivec，其元素是vector<int>对象。

vector<string> svec = ivec; // 错误，不能用vector<int>初始化vector<string>。

vector<string> svec(10, "null"); // 正确，定义了一vector<string>，有10个元素，每个元素都是字符串"null"。