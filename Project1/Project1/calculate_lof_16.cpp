#include <iostream>
using namespace std;

int main_16()
{
	//取余运算
	int a = 10;
	int b = 3;
	cout << "a % b=" << a % b << endl;

	//只有整数可以进行取余运算！！！
	/*
	int a2 = 10;
	float b2 = 3.0;
	cout << "a2 % b2=" << a2 % b2 << endl;
	错误	C2297	“% ”: 非法，右操作数包含“float”类型
		*/
	system("pause");
	return 0;
}