#include <iostream>
using namespace std;

//确认返回值类型 函数名称 参数
//a,b并不是真实数据，称为形参
int add_func(int a, int b)
{
	//函数体内容
	int sum = a + b;
	//返回结果
	return sum;
}

int main_45()
{
	//a,b为实际参数，实参
	int a = 8;
	int b = 9;
	//函数调用语法：函数名(参数)
	//在main函数中调用自定义的函数
	//在调用函数时，实参的值会传递给形参
	int sum_1 = add_func(a, b);
	printf("%s+%s=", a, b);
	cout << sum_1 << endl;

	system("pause");
	return 0;
}