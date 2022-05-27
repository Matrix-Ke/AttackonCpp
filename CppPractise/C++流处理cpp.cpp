#include <iostream>
#include <fstream>
#include <string>
#include <strstream>


using namespace std;
int main()
{
	fstream file("IOstreamTest.json");
	string  str;
	char   arr[256];
	if (file)
	{
		//错误示例， 一个流无法直接输出到另一个流中 cout << file << endl;

		//file.getline(arr, 256);
		while (!file.eof())
		{
			getline(file, str);
			cout << str << endl;
		}
	}


	return 0;
}