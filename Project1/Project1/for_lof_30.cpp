#include <iostream>
using namespace std;

int main_30()
{
	//for内声明变量
	for (int a = 0; a < 100; a++)
	{
		cout << a << endl;
	}
	//for外声明变量
	int b = 100;
	for (;b < 200; b++)
	{
		cout << b << endl;
	}
	system("pause");
	return 0;
}