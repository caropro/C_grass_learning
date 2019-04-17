#include <iostream>
using namespace std;

//函数如果不需要返回值，可以用void来进行声明
void swap(int num_1, int num_2)
{
	cout << "交换前的数值：" << endl;
	cout << "num_1=" << num_1 << endl;
	cout << "num_2=" << num_2 << endl;

	int temp=num_1;
	num_1 = num_2;
	num_2 = temp;

	cout << "交换后的数值：" << endl;
	cout << "num_1=" << num_1 << endl;
	cout << "num_2=" << num_2 << endl;


	//不需要返回值的时候可以不写return
	return;//非要写的话，后面不要跟数值。
}

int main_46()
{
	int a = 10;
	int b = 25;
	swap(a, b);

	cout << "形参转换测试结束--------------" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");
	return 0;
}