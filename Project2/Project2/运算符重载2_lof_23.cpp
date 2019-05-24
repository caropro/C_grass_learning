#include <iostream>
using namespace std;

class test_cls_23 
{
	friend ostream& operator<<(ostream& cout, test_cls_23& p);
public:
	//无参构造
	test_cls_23()
	{
		value_init = 0;
	}
	//含参构造
	//test_cls_23(int new_value)
	//{
	//	this->value_init = new_value;
	//}

	//前置递增
	test_cls_23& operator++()
	{
		value_init++;
		return *this;
	}
	//后置递增
	test_cls_23 operator++(int)
	{
		test_cls_23 temp = *this;
		value_init++;
		return temp;
	}

private:
	int value_init;
};

//重载输出
ostream& operator<<(ostream& cout, test_cls_23& p)
{
	cout << "输出值：" << p.value_init << endl;
	return cout;
}


void test_23()
{
	test_cls_23 a;
	cout << ++a << endl;
	cout << a << endl;
}


void test_23_2()
{
	test_cls_23 b;
	cout << b;
	test_cls_23 temp = b++;
	//cout << b++.value_init;
	cout << temp;
	cout << b;
}

int main_23()
{
	test_23();

	test_23_2();
	system("pause");
	return 0;
}