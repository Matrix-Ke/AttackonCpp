#pragma once
#include <exception>
#include <iostream>
#include <string>

using namespace std;

class ClassTest
{
public:
	ClassTest();
	ClassTest(const char* pName);
	ClassTest(char* name, int number);

	void printClassInfo();


private:
	unsigned int mNumber;
	char* mName;
};

