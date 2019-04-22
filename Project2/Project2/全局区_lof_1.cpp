#include <iostream>
using namespace std;

//全局变量
int g_a = 10;

//const修饰的全局变量——全局常量
const int const_g_c = 10;

int main_1()
{
	//局部变量
	int l_a = 10;

	//静态变量
	static int s_l_b = 10;

	//变量部分输出
	cout << "全局变量g_a的内存地址：" << (int)&g_a << endl;
	cout << "局部变量l_a的内存地址：" << (int)&l_a << endl;
	cout << "静态变量s_l_a的内存地址：" << (int)& s_l_b << endl;

	//const修饰的局部变量——局部常量
	const int const_c = 10;

	//字符串常量
	"hello world";

	//常量部分输出
	cout << "字符串常量的内存地址：" << (int) & "Hello world" << endl;
	cout << "全局常量const_g_c的内存地址：" << (int)& const_g_c << endl;
	cout << "局部常量const_c的内存地址：" << (int)& const_c << endl;

	system("pause");
	return 0;
}



