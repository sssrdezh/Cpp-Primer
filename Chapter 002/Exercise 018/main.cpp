#include <iostream>
using namespace std;
int main()
{
	int x = 1, y = 2;;
	int *p = &x;
	cout << *p << endl;
	p = &y;
	cout << *p << endl;
	*p = 5;
	cout << y << endl;
	return 0;
}