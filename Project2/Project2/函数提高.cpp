#include <iostream>
using namespace std;

int add_func(int a = 0, int b = 0)
{
	return(a+b);
}


//重载测试，所有函数都处在同一个作用域内
int add_test()
{
	return 10;
}
//参数不同，可以重载，只有返回值不同，不可以重载
int add_test(int a)
{
	return 10;
}

double add_test(double a)
{
	return 10;
}

float add_test(float c, int a)
{
	return 101;
}

void add_test(float a)
{
	cout << "void add_test(float a)" << endl;
}

//参数后跟占位参数
//参数，占位参数，有默认值的参数
void mult_func(int a , int ,int b=10)
{
	cout << "func run" << endl;
}

int main()
{
	cout << "1+1=" << add_func(1, 1) << endl;
	mult_func(11, 11, 11);
	cout<<add_test();
	system("pause");
	return 0;
}

