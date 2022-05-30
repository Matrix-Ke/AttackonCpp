#include "ClassTest.h"


char   name[20] = "KKL";
int BaseClassForTest::mStaticNum = 100;

BaseClassForTest::BaseClassForTest()
{
	//mName = name;
	//mNumber = 28;
	//std::cout << "BaseClassForTest construtor has been called\n";

	mName = name;
	mNumber = 28;
}

BaseClassForTest::BaseClassForTest(const char* pName)
{
	mNumber = (unsigned int)strlen(pName) + 1;
	mName = new char[mNumber];
	strcpy_s(mName, mNumber, pName);
}

BaseClassForTest::BaseClassForTest(char* name, int number)
{
	mName = name;
	mNumber = number;
}

BaseClassForTest::BaseClassForTest(const BaseClassForTest& rhs)
{

	unsigned  lens = strlen(rhs.mName) + 1;
	this->mName = new char[lens];
	strcpy_s(this->mName, lens, rhs.mName);
	this->mNumber = rhs.mNumber;
}

BaseClassForTest::BaseClassForTest(BaseClassForTest&& rhs)
{
	if (rhs.mName)
	{
		this->mName = rhs.mName;
		rhs.mName = nullptr;
	}
	this->mNumber = rhs.mNumber;
}


BaseClassForTest::~BaseClassForTest()
{
	//std::cout << "BaseClassForTest = " << mName << " Deconstructor has been called!" << std::endl;
}

void BaseClassForTest::baseFunction()
{
	std::cout << "baseFunction called \n";
}

void BaseClassForTest::PrintInfo() const
{
	std::cout << "hello base \n";
}

//void BaseClassForTest::printClassInfo() const
//{
//	std::cout << "class name:" << mName << "\n" << "class number:" << mNumber << std::endl;
//}


//void ChildClass::printClassInfo() const
//{
//	printf_s("ChildClass info staticNum = %d \n", mStaticNum);
//}


void ChildClass::ChildFunction()
{
	std::cout << "ChildFunction called \n";
}

void ChildClass::PrintInfo() const
{
	std::cout << "hello child \n";
}
