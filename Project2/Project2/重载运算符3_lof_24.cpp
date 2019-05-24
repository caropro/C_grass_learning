#include <iostream>
using namespace std;

class test_class24
{
public:
	//有参构造函数
	test_class24(int input_value)
	{
		//将引入的数据开辟到堆区
		test_value = new int(input_value);
	}

	test_class24& operator=(test_class24& p)
	{
		if (test_value != NULL)
		{
			//如果调用默认的拷贝构造函数，会执行浅拷贝，当先前变量完成任务被回收的时候，拷贝出来的就会因无法删除同一个空内存而报错
			delete test_value;
			test_value = NULL;
		}
		test_value = new int(*p.test_value);

		return *this;
	}
	//关系运算符重载，判断两个同类型变量是否相等。
	bool operator==(test_class24& p)
	{
		if (*this->test_value == *p.test_value)
		{
			return true;
		}
		return false;
	}

	bool operator!=(test_class24& p)
	{
		if (*this->test_value == *p.test_value)
		{
			return false;
		}
		return true;
	}

	//析构函数，回收之前的指针
	~test_class24()
	{
		if (test_value != NULL)
		{
			//如果调用默认的拷贝构造函数，会执行浅拷贝，当先前变量完成任务被回收的时候，拷贝出来的就会因无法删除同一个空内存而报错
			delete test_value;
			test_value = NULL;
		}
	}
public:
	//创建指针类型的数据，来保存new出来的地址
	int * test_value;

};


void test_func24()
{
	test_class24 a(10);

	test_class24 b(22);

	b = a;

	cout << "返回a的值：" << *a.test_value << endl;

	cout << "返回b的值：" << *b.test_value << endl;

	if (a == b)
	{
		cout << "a与b相等" << endl;
	}

	if (a != b)
	{
		cout << "a与b不相等" << endl;
	}
}

int main()
{
	test_func24();

	system("pause");
	return 0;
}