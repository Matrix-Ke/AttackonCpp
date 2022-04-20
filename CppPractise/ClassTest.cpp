#include "ClassTest.h"


char   name[20] = "KKL";

ClassTest::ClassTest()
{
	//mName = name;
	//mNumber = 28;
	std::cout << "ClassTest construtor has been called\n";

	mName = name;
	mNumber = 28;
}

ClassTest::ClassTest(const char* pName)
{
	mNumber = strlen(pName) + 1;
	mName = new char[mNumber];
	strcpy_s(mName, mNumber, pName);
}

ClassTest::ClassTest(char* name, int number)
{
	mName = name;
	mNumber = number;
}

ClassTest::~ClassTest()
{
	std::cout << "ClassTest = "<< mName <<" Deconstructor has been called!" << std::endl;
}

void ClassTest::printClassInfo()
{
	std::cout << "class name:" << mName << "\n" << "class number:" << mNumber << std::endl;
}
