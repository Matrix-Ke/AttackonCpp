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
		//����ʾ���� һ�����޷�ֱ���������һ������ cout << file << endl;

		//file.getline(arr, 256);
		while (!file.eof())
		{
			getline(file, str);
			cout << str << endl;
		}
	}


	return 0;
}