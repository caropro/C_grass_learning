#include <iostream>
using namespace std;

//声明一个传值的函数
void swap_none(int a, int b);

//声明一个传地址的函数
void swap(int* p1, int* p2);

int main_55()
{
	int a = 10;
	int b = 20;
	//先进行传值，看看形参能不能影响
	swap_none(a, b);
	cout << "交换后的a：" << a << endl;
	cout << "交换后的b：" << b << endl;

	//再进行传地址
	swap(&a, &b);
	cout << "交换后的a：" << a << endl;
	cout << "交换后的b：" << b << endl;

	system("pause");
	return 0;
}

//补充定义前面的函数
void swap_none(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;

	cout << "值交换后的a：" << a << endl;
	cout << "值交换后的b：" << b << endl;
}

//
void swap(int * p1, int * p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}