#include <iostream>
#include <bitset>

void print()
{
	std::cout << "print end\n";
}

// typename... ģ�������
template<typename T, typename... Types>
//Types&... �����������Ͱ�
void print(const T& firstArg, const Types&... Args)
{
	std::cout << firstArg << std::endl;
	//Args����������
	print(Args...);
}

template<typename... Types>
void print(const Types&...  Args)
{
	std::cout << "test args\n";
}

//sample2 ʵ��recursive inheritance 



int main()
{
	print(7.5, "hello world", std::bitset<16>(333), 55);
}