#include <iostream>
using namespace std;

int main_53()
{
	int a = 10;
	int b = 21;
	//1.const修饰指针，可以改指向，不可以改值
	//先指向a
	const int* p1 = &a;
	cout << "初始指向位置：" << p1 << endl;
	cout << "初始指向的值：" << *p1 << endl;
	//修改指向
	p1 = &b;
	cout << "修改后的指向位置：" << p1 << endl;
	cout << "修改后的指向的值：" << *p1 << endl;
	
	//2.const修饰常量，只可以改值
	int * const p2 = &a;
	cout << "打印p2的值" << *p2 << endl;
	//修改值
	*p2 = 101;
	cout << "打印p2的值" << *p2 << endl;

	//3.const既修饰指针，又修饰常量，什么都不可以改
	const int* const p3 = &b;
	cout << "p3的地址：" << p3 << endl;
	cout << "p3的值：" << *p3 << endl;

	system("pause");
	return 0;
}