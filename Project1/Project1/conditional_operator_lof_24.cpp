#include <iostream>
using namespace std;

int main_24()
{
	int a;
	int b;
	int c;
	int max;
	int min;
	//输入三个判断值
	cout << "输入判断值A：" << endl;
	cin >> a;
	cout << "输入判断值B：" << endl;
	cin >> b;
	cout << "输入判断值C：" << endl;
	cin >> c;

	//abc之中最大值
	max = a > b ? a : b;
	max = max > c ? max : c;
	cout << "max value：" << max << endl;

	//同样可以用来作为变量判断
	min = 0;
	(a > b ? a : b) = min;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}