#include <iostream>
using namespace std;


class test_class_14
{
public:
	//声明类的时候，默认会生成三个空的构造函数
	test_class_14()
	{
		cout << "调用默认构造函数" << endl;
	}
	//如果只声明了有参构造，则会自动产生空的拷贝函数
	test_class_14(int value_input)
	{
		cout << "调用有参构造函数" << endl;
		value = value_input;
	}
	//如果只声明了拷贝构造函数，则不会自动产生另外两个
	test_class_14(const test_class_14& c)
	{
		value = c.value;
		cout << "调用拷贝构造函数" << endl;
	}
	int value;
};


void test_func_1()
{
	test_class_14 c;
}

int main_14()
{
	test_func_1();

	system("pause");
	return 0;
}