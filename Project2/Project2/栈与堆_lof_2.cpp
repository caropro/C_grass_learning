#include <iostream>
using namespace std;
//局部变量，形参会存在栈区
//栈区内容在调用过后，会被系统自动释放，所以尽量避免返回栈区数据的内存地址
int* func_a(int b)//函数形参会存在栈区
{
	b = 100;
	int a = 10;
	return &a;//返回a的地址
}

int* func_b(int b)
{
	b = 100;
	//这个局部指针变量还是会存在栈区
	int * p = new int(10);//new 在堆区开出一个地址来存放数据
	return p;
}

int _2()
{
	int* p = func_a(10);//使用指针接收返回的地址

	cout << *p << endl;//第一次解引用得到的是正确数值，因为编译器做了保留
	cout << *p << endl;//第二次释放之后就是错误的了

	int* p2 = func_b(10);//接收返回的堆区数据地址
	cout << *p2 << endl;
	cout << *p2 << endl;//只要不手动回收，就要等到程序关闭的时候自动释放了

	system("pause");
	return 0;
}