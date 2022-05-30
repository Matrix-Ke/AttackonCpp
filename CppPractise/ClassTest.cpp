#include "ClassTest.h"


char   name[20] = "KKL";
int BaseClass::mStaticNum = 100;

BaseClass::BaseClass()
{
	//mName = name;
	//mNumber = 28;
	//std::cout << "BaseClass construtor has been called\n";

	mName = name;
	mNumber = 28;
}

BaseClass::BaseClass(const char* pName)
{
	mNumber = (unsigned int)strlen(pName) + 1;
	mName = new char[mNumber];
	strcpy_s(mName, mNumber, pName);
}

BaseClass::BaseClass(char* name, int number)
{
	mName = name;
	mNumber = number;
}

BaseClass::~BaseClass()
{
	//std::cout << "BaseClass = " << mName << " Deconstructor has been called!" << std::endl;
}

void BaseClass::baseFunction()
{
	std::cout << "baseFunction called \n";
}

void BaseClass::PrintInfo() const
{
	std::cout << "hello base \n";
}

void BaseClass::printClassInfo() const
{
	std::cout << "class name:" << mName << "\n" << "class number:" << mNumber << std::endl;
}


void ChildClass::printClassInfo() const
{
	printf_s("ChildClass info staticNum = %d \n", mStaticNum);
}


void ChildClass::ChildFunction()
{
	std::cout << "ChildFunction called \n";
}

void ChildClass::PrintInfo() const
{
	std::cout << "hello child \n";
}

void ChildClassTwo::ChildFunction()
{
	std::cout << "ChildClassTwo called\n ";
}

void ChildClassTwo::printClassInfo() const
{
}

