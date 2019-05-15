#include <iostream>
using namespace std;

class test_class_20
{
public:
	//常函数，const修饰内容放在形参后
	void func_1() const
	{
		//常函数中不能做当前对象中变量的普通修改
		//this.value_a = 111;
		cout << value_a << endl;
		this->value_b = 111;
		cout << value_b << endl;
	}
	//普通无参函数
	void func_2()
	{}

	int value_a;
	//添加mutable后，变量可以在常函数中或被对象进行修改
	mutable int value_b;

};

void test_func()
{
	//普通对象可以调用常函数，也可以修改mutable的变量
	test_class_20 a;
	a.value_a = 111;
	a.func_1();
	a.value_b = 222;

	//常对象
	//const test_class_20 b;
	//b.value_b = 333;
	//cout << "常对象中的数值b：" << b.value_b << endl;
	//b.func_1();
	//常对象只能调用常函数
	//b.func_2();
}

int main_20()
{
	test_func();
	system("pause");
	return 0;
}