#pragma once
//#include <stdio.h>
//#include <tchar.h>
//#include <assert.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <thread>


using namespace std;


long globalVar = 0;

void threadProcess1(int parameter)
{
	//cout << "thread index :" << parameter << endl;
	//cout << "globalVarPre =" << globalVar << endl;
	//cout << globalVar; /*<< endl;*/
	globalVar++;
	cout << globalVar;
	//cout << "globalVarPost =" << globalVar << endl;
}




typedef void threadFun(int parameter);

//int numberArray[10];

int main()
{
	vector<thread>   threadArray;
	for (size_t i = 0; i < 10; i++)
	{
		threadArray.push_back(thread(threadProcess1, i));
	}

	//threadArray.push_back(thread(threadProcess1, numberArray));
	//threadArray.push_back(thread(threadProcess1, numberArray));
	//threadArray.push_back(thread(threadProcess1, numberArray));

	for (size_t i = 0; i < threadArray.size(); i++)
	{
		threadArray[i].join();
	}

	cout << "globalVar: " << globalVar << endl;

	return 0;
}
