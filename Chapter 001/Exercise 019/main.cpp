#include <iostream>
int main()
{
	int v1, v2;
	std::cout << "Please input two numbers." << std::endl;
	std::cin >> v1 >> v2;
	if (v1 < v2)
	{
		while (v1 < v2)
		{
			std::cout << v1 << " ";
			++v1;
		}
	}
	else
	{
		while (v1 > v2)
		{
			std::cout << v1 << " ";
			--v1;
		}
	}
	std::cout << v1 << std::endl;
	return 0;
}