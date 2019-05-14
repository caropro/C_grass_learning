#include <iostream>
using namespace std;

class test_class_16
{
public:
	//初始化列表为参数传入默认值，含参
	test_class_16(int a = 10, int b = 20, int c = 30) :test_value_1(a), test_value_2(b), test_value_3(c) {}

	//默认参数
	int test_value_1;
	int test_value_2;
	int test_value_3;
};


void test_func(const test_class_16 & p)
{
	cout << "test类中，1号值为：" << p.test_value_1 << endl;
	cout << "test类中，2号值为：" << p.test_value_2 << endl;
	cout << "test类中，3号值为：" << p.test_value_3 << endl;
}


int main_16()
{
	test_class_16 p;
	test_func(p);

	test_class_16 p2(33,44,55);
	test_func(p2);

	system("pause");
	return 0;
}