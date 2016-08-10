#include <iostream>
int main()
{
	int sum = 0;
	int val;
	std::cout << "Please input several numbers" << std::endl;
	while (std::cin >> val)
	{
		sum += val;
	}
	std::cout << "Sum of inputs is " << sum << std::endl;
}