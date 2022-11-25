#include <iostream>
#include <bitset>

void print()
{
	std::cout << "print end\n";
}

// typename... 模板参数包
template<typename T, typename... Types>
//Types&... 函数参数类型包
void print(const T& firstArg, const Types&... Args)
{
	std::cout << firstArg << std::endl;
	//Args函数参数包
	print(Args...);
}

template<typename... Types>
void print(const Types&...  Args)
{
	std::cout << "test args\n";
}

//sample2 实现recursive inheritance 



int main()
{
	print(7.5, "hello world", std::bitset<16>(333), 55);
}