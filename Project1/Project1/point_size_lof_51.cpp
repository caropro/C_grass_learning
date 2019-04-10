#include <iostream>

using namespace std;

int main_51()
{
	int a = 112;
	//声明指针p
	int * p;
	//指针p指向变量a
	p = &a;

	//32位系统下，指针占用4个字节；64位占用8个字节。
	cout <<"指针p的大小："<<sizeof(p)<<endl;

	cout <<"char 类型的指针大小："<<sizeof(char* )<<endl;

	cout <<"float 类型的指针大小："<<sizeof(float*)<<endl;

	cout <<"double 类型的指针大小："<<sizeof(double*)<<endl;

	system("pause");
	return 0;
}


