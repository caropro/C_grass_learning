#include <iostream>
using namespace std;

//将变量引用到函数中，值直接回馈到变量
void swap_value(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
//
int & return_ref_var()
{
	int a = 22;
	//返回变量a的引用，这个a是局部变量，如果引用的话只能在内部运算时引用
	return a;
}

int & return_ref_static()
{
	static int a = 22;
	//返回变量a的引用，这个a是静态变量，存储在全局区，不会在函数调用后被回收
	return a;
}

void print_val(const int& a)
{
	//a = 100;被修饰的引用无法修改值
	cout << "输出值：" << a << endl;
}

int main()
{
	int a = 10;
	int& b = a;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	int c = 100;
	swap_value(c, a);

	cout << "a=" << a << endl;
	cout << "c=" << c << endl;

	//引用局部变量返回值，输出编译器保留之后就不能正常输出了
	int& ref = return_ref_var();
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;

	//这次引用的返回值是静态变量，只有程序结束后才会回收的
	int& ref1 = return_ref_static();
	cout << "ref1 = " << ref1 << endl;
	cout << "ref1 = " << ref1 << endl;

	print_val(a);
	system("pause");
	return 0;
}
