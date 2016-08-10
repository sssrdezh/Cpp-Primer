#include <iostream>
int main()
{
	int v1, v2;
	std::cout << "Please input two numbers." << std::endl;
	std::cin >> v1 >> v2;
	if (v1 < v2)
	{
		for (int i = v1; i < v2; i++)
		{
			std::cout << i << " ";
		}
	}
	else
	{
		for (int i = v1; i > v2; i--)
		{
			std::cout << v1 << " ";
			--v1;
		}
	}
	std::cout << v2 << std::endl;
	return 0;
}