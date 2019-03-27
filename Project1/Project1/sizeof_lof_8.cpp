#include <iostream>
using namespace std;

int main8()
{
	/*
	sizeof 使用语法：sizeof(数据类型/变量)
	*/

	//short 类型的空间占用大小
	cout << "short 类型的空间占用大小:" << sizeof(short) << endl;

	//int 类型的空间占用大小
	cout << "int 类型的空间占用大小:" << sizeof(int) << endl;

	//long 类型的空间占用大小
	cout << "long 类型的空间占用大小:" << sizeof(long) << endl;

	//long long 类型的空间占用大小
	cout << "long long 类型的空间占用大小:" << sizeof(long long) << endl;

	system("pause");
	return 0;
}
