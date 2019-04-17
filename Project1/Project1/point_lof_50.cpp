#include <iostream>
using namespace std;

int main_50()
{
	//声明一个变量
	int a = 10;
	//声明一个指针
	int * p;
	
	p = &a;
	//打印一下变量指向位置
	cout << "变量a的内存地址：" << &a << endl;
	cout << "p保存的地址：" << p << endl;

	//通过解引用来修改指针指向内存所保存的数据
	*p = 233;
	cout << "修改后a的数据：" << a << endl;
	cout << "修改后*p的数据：" << *p << endl;

	system("pause");
	return 0;
}