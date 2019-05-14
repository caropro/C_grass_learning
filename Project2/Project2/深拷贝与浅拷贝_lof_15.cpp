#include <iostream>
using namespace std;

class test_class_15
{
public:
	//无参构造函数
	test_class_15()
	{
		cout << "无参构造函数调用" << endl;
	}
	//含参构造函数
	test_class_15(int test_value_input , int test_value2_input)
	{
		cout << "含参构造函数调用" << endl;
		test_value = test_value_input;
		test_value_2 = new int(test_value2_input);//在数据传入的时候，让指针类型的参数，指向新开拓的内存地址，避免还未使用完就被回收掉。
	}
	//拷贝构造函数
	test_class_15(const test_class_15 & tc)
	{
		cout << "拷贝构造函数调用" << endl;
		test_value = tc.test_value;//默认传入数值
		test_value_2 = new int(*tc.test_value_2);//在进行拷贝的时候，同含参构造，再开拓堆区存储数据
	}
	//析构函数，回收在堆区开启存储
	~test_class_15()
	{
		cout << "调用析构函数，回收函数内的手动内存" << endl;
		delete test_value_2;
	}

	int test_value;
	int * test_value_2;
};


int main_15()
{
	test_class_15 t1(10, 22);
	cout << "t1的两个数值分别为：" << t1.test_value << "\n" << *t1.test_value_2 << endl;
	
	test_class_15 t2(t1);
	cout << "t2的两个数值分别为：" << t2.test_value << "\n" << *t2.test_value_2 << endl;
	system("pause");
	return 0;
}