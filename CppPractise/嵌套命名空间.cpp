#include <stdlib.h>

#include <iostream>


namespace Root
{
	int Number = 2;
	namespace LeftChild
	{
		int Number = 16;
		char  test[] = "I am test char\n";

		namespace A { int Number = 32; }
		namespace B { int Number = 64; }
	}
	namespace RightChild
	{
		int Number = 128;
		namespace C { int Number = 256; }
		namespace D
		{
			int Number = 512;
			int sn = C::Number + 1;
		}
		const char* arrChar = LeftChild::test;
		int FuckNamespace = Root::LeftChild::A::Number;

		int sn = LeftChild::Number + 1;
	}
}


using namespace std;
int main()
{
	std::cout << "FuckNamespace = " << Root::RightChild::FuckNamespace << std::endl;
	std::cout << "arrChar = " << Root::RightChild::arrChar;
	return 0;
}