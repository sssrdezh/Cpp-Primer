#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
	Sales_item current_item, sum;
	cin >> sum;
	while (cin >> current_item)
	{
		if (current_item.isbn() != sum.isbn())
		{
			cout << "different isbn" << endl;
			return -1;
		}
		else
		{
			sum += current_item;
		}
	}
	cout << sum << endl;
	return 0;
}