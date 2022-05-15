#include "ClassTest.h"


//内存对齐
template< class T > inline T Align(const T Ptr, unsigned int Alignment)
{
	return (T)(((unsigned int)Ptr + Alignment - 1) & ~(Alignment - 1));
}

int main()
{
	//unsigned int PageSize = 0x80000000 - 1;

	//cout << "PageSize = " << PageSize << endl;
	//cout << "~PageSize = " << ~PageSize << endl;

	ChildClass cb = ChildClass();

	cb.PrintInfo();
	return 0;
}


