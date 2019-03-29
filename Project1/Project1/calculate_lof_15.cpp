#include <iostream>
using namespace std;

int main_15()
{
	//加减乘除基本运算
	int a = 10;
	int b = 4;
	//整型之间的运算
	cout << "a+b=" << a + b << endl;
	cout << "a-b=" << a - b << endl;
	cout << "a*b=" << a * b << endl;
	cout << "a/b=" << a / b << endl;

	float c = 4.0;
	//浮点数参与乘除法
	cout << "a+c=" << a + c << endl;
	cout << "a-c=" << a - c << endl;
	cout << "a*c=" << a * c << endl;
	cout << "a/c=" << a / c << endl;

	double d = 4.6;
	double e = 7.24;
	//小数之间的运算
	cout << "d/e=" << d / e << endl;

	system("pause");
	return 0;
}