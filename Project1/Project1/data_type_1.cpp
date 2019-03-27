#include <iostream>
using namespace std;

int main7()
{
	//short 类型占用2字节的空间。取值范围：-2^15~2^15-1
	short short_int = 10;

	cout << "short 类型的变量 :" << short_int << endl;

	//int 类型占用4字节的空间。取值范围：-2^31~2^31-1
	int int_int = 10;

	cout << "int 类型的变量 :" << int_int << endl;

	//long 类型windows系统占用4字节的空间，Linux系统32位占4字节、64位占8字节空间。取值范围：-2^31~2^31-1
	long long_int = 10;

	cout << "long 类型的变量 :" << long_int << endl;

	//long long 类型占用8字节的空间。取值范围：-2^63~2^63-1
	long long long_long_int = 10;

	cout << "long long 类型的变量 :" << long_long_int << endl;

	system("pause");
	return 0;
}