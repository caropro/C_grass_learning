#include <iostream>
using namespace std;

int main7()
{
	//short ����ռ��2�ֽڵĿռ䡣ȡֵ��Χ��-2^15~2^15-1
	short short_int = 10;

	cout << "short ���͵ı��� :" << short_int << endl;

	//int ����ռ��4�ֽڵĿռ䡣ȡֵ��Χ��-2^31~2^31-1
	int int_int = 10;

	cout << "int ���͵ı��� :" << int_int << endl;

	//long ����windowsϵͳռ��4�ֽڵĿռ䣬Linuxϵͳ32λռ4�ֽڡ�64λռ8�ֽڿռ䡣ȡֵ��Χ��-2^31~2^31-1
	long long_int = 10;

	cout << "long ���͵ı��� :" << long_int << endl;

	//long long ����ռ��8�ֽڵĿռ䡣ȡֵ��Χ��-2^63~2^63-1
	long long long_long_int = 10;

	cout << "long long ���͵ı��� :" << long_long_int << endl;

	system("pause");
	return 0;
}