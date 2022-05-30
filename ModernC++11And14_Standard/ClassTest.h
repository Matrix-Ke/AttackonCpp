#pragma once
#include <exception>
#include <iostream>
#include <string>

using namespace std;

class BaseClassForTest
{
public:
	BaseClassForTest();
	BaseClassForTest(const char* pName);
	BaseClassForTest(char* name, int number);

	BaseClassForTest(const BaseClassForTest& rhs);
	BaseClassForTest(BaseClassForTest&& rhs);  //“˝»Îmove”Ô“Â


	~BaseClassForTest();
	//virtual  void printClassInfo()  const;
	void baseFunction();
	void PrintInfo() const;

public:
	static int mStaticNum;
private:
	unsigned int mNumber;
	char* mName;
};


class ChildClass : public BaseClassForTest
{
public:
	void ChildFunction();
	void PrintInfo() const;

	//virtual void printClassInfo() const;

private:
	int testNum;

};

