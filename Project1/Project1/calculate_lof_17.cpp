#include <iostream>
using namespace std;

int main_17()
{
	//前置递增
	int a = 9;
	++a;//a=a+1
	cout << "a = " << a << endl;
	//后置递增
	int a2 = 9;
	a2++;//a=a+1
	cout << "a2 = " << a2 << endl;

	//前置后置区别
	int b = ++a * 10;
	//前置递增，先叠加，再运算
	cout << "b = " << b << endl;
	
	int b2 = a2++ * 10;
	//后置递增先进行运算，后进行变量叠加
	cout << "b2 = " << b2 << endl;

	cout << "a = " << a << endl;
	cout << "a2 = " << a2 << endl;
	system("pause");
	return 0;
}

