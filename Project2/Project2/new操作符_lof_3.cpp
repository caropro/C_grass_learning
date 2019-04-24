#include <iostream>
using namespace std;

int* func()
{
	int* p = new int(10);//使用new在堆区开辟新区域
	return p;//返回指向地址
}

void test()
{
	int* p = func();//局部变量接收地址信息

	cout << *p << endl;
	cout << *p << endl;

	delete p;
	//回收之后就不能再访问这个地址了
}

//在堆区开辟数组
void test2()
{
	int * arr = new int[10];//使用中括号表明此类型数组中元素个数

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 11;
	}
	for (int i = 0; i < 10; i++)
	{
		cout<<arr[i]<<endl;
	}
	//回收数组时加中括号
	delete[] arr;
}

int main_3()
{

	test();
	test2();
	system("pause");
	return 0;
}