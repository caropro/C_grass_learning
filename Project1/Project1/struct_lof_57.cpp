#include <iostream>
using namespace std;

//声明一个结构体，看着神似python中class的部分功能
//声明包含的数据类型
struct test_data_pack
{
	string name;
	int data_info;
	int data_index;
};
//声明包含的数据类型并赋值
struct test_data_pack2
{
	string name="操操操操";
	int data_info=3333;
	int data_index=3;
};

//声明包含的数据类型并赋值，并直接创建变量
struct test_data_pack3
{
	string name = "fuck";
	int data_info = 4444;
	int data_index = 4;
}test4;

int main_57()
{
	//在创建结构体变量时进行赋值
	//struct关键字可以省略
	test_data_pack test1 = { "test_test", 11, 1 };
	cout << "test1相关数据：" << endl;
	cout << test1.name << endl;
	cout << test1.data_info << endl;
	cout << test1.data_index << endl;
	//在创建结构体变量后进行赋值
	struct test_data_pack test2;
	test2.name = "hahahaha";
	test2.data_info = 1111;
	test2.data_index = 2;
	cout << "test2相关数据：" << endl;
	cout << test2.name << endl;
	cout << test2.data_info << endl;
	cout << test2.data_index << endl;
	//结构体自带默认数据
	struct test_data_pack2 test3;
	cout << "test3相关数据：" << endl;
	cout << test3.name << endl;
	cout << test3.data_info << endl;
	cout << test3.data_index << endl;
	//创建结构体时默认创建变量
	struct test_data_pack3 test4;
	cout << "test4相关数据：" << endl;
	cout << test4.name << endl;
	cout << test4.data_info << endl;
	cout << test4.data_index << endl;
	system("pause");
	return 0;
}