#include <iostream>
#include <string>


std::string ConvertFun(int ten)
{
	std::string   StringSum;
	int complementation = ten;
	while (complementation > 0)
	{
		int modulo = complementation % 7;
		complementation = complementation / 7;

		StringSum = std::to_string(modulo) + StringSum;
	}
	//for (auto& n : StringSum)
	//{

	//}
	return StringSum;
}

int main()
{
	std::cout << "convert result:" << std::endl;
	std::cout << ConvertFun(100) << std::endl;
	return 0;
}