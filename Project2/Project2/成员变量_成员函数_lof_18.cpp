#include <iostream>
using namespace std;

class test_class_18
{
	//默认私有
	//变量
	int value;
	//静态变量
	static int c_value;
	//成员函数
	void func() {}
	//静态成员函数
	static void func_2() {}
};

class test_class_18_blk
{
};


//类内的静态变量要在外部定义
int test_class_18::c_value = 000;

int main_18()
{
	test_class_18 t;
	cout << "t占空间大小：" << sizeof(t) << endl;

	test_class_18_blk t_blk;
	cout << "t_blk占空间大小：" << sizeof(t_blk) << endl;
	system("pause");
	return 0;
}
