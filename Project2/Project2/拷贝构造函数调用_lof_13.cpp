#include <iostream>
using namespace std;

class test13
{
public:
	//无参构造函数
	test13()
	{
		cout << "无参数，构造函数调用。" << endl;
	}

	//含参构造函数
	test13(int value)
	{
		cout << "含参数，构造函数调用。" << endl;
		test13_value = value;
	}
	//无参构造函数
	test13(const test13 & t)
	{
		test13_value = t.test13_value;
		cout << "拷贝构造函数调用。" << endl;
	}
	//析构函数
	~test13()
	{
		cout << "析构函数调用" << endl;
	}
	//公共内部参数
	int test13_value;
};
//拷贝构造调用：使用已有对象进行初始化
void test_a()
{
	test13 testa(145);
	test13 testb(testa);

	cout << "test a 的值：" << testa.test13_value << endl;
	cout << "test b 的值：" << testb.test13_value << endl;
}

//拷贝构造调用：当此类数据作为参数传入函数的时候
void test_b(test13 test)
{
	cout << "test13 类型数据传入" << endl;
	cout << "传入数据的数值为：" << test.test13_value << endl;
}


//拷贝构造调用：当此类数据作为函数返回值的时候
test13 test_c()
{
	test13 test(166);
	return(test);
}


int main_13()
{
	//test_a();

	//test13 t(123);
	//test_b(t);

	test13 test = test_c();
	cout << "返回的test13类型数值为：" << test.test13_value << endl;

	system("pause");
	return 0;
}