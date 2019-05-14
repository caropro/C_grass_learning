#include <iostream>
using namespace std;

class test_class_17
{
public:
	//静态函数只可以访问静态变量数据
	static void st_func()
	{
		cout << "静态函数调用" << endl;
		cout << "静态变量 a的值为：" << st_value_a << endl;
		st_value_a = 999;
		cout << "修改后静态变量 a的值为：" << st_value_a << endl;
	}

	//静态成员变量，在类内进行声明，在类外进行初始化
	static int st_value_a;
	static int st_value_b;

private:
	//私有权限的静态函数在外部无法调用。
	static void st_func_p()
	{
		cout << "静态函数调用" << endl;
		cout << "静态变量 a的值为：" << st_value_a << endl;
		st_value_a = 999;
		cout << "修改后静态变量 a的值为：" << st_value_a << endl;
	}

	//静态成员变量，在类内进行声明，在类外进行初始化，私有变量可以初始化，不能访问
	static int st_value_c;
};

//可以初始化
int test_class_17::st_value_a = 134;
int test_class_17::st_value_c = 4;

void test_cunc_1()
{
	test_class_17 t;
	//一种作为对象的属性进行访问。
	cout << "当前数值a的值为：" << t.st_value_a << endl;
	t.st_value_a = 133;
	cout << "当前数值a的值为：" << t.st_value_a << endl;
	//一种作为类的子项进行访问。
	test_class_17 t2;
	cout << "当前数值a的值为：" << test_class_17::st_value_a << endl;

	//私有属性不能访问，只能初始化。
	//cout << "当前数值c的值为：" << test_class_17::st_value_c << endl;
}

void test_cunc_2()
{
	//直接调用类内的func
	test_class_17::st_func();
}

int main_17()
{
	test_cunc_1();
	test_cunc_2();
	system("pause");
	return 0;
}