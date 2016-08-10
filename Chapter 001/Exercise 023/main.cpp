#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
	Sales_item current_item, last_item;
	int sum = 0;
	if (cin >> last_item)
	{
		sum = 1;
		while (cin >> current_item)
		{
			if (current_item.isbn() == last_item.isbn())
			{
				++sum;
			}
			else
			{
				cout << last_item.isbn() << " " << sum << endl;
				sum = 1;
				last_item = current_item;
			}
		}
		cout << last_item.isbn() << " " << sum << endl;
	}
	else
	{
		return -1;
	}
	return 0;
}