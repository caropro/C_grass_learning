#include <iostream>
using namespace std;

//父级定义一个虚函数，为子集各自扩展做准备
class abstract_cal
{
public:
	virtual int calculate()
	{
		return 0;
	}
	int num_a;
	int num_b;
};

class add_substract :public abstract_cal
{
public:
	int calculate()
	{
		return num_a + num_b;
	}
};

class mult :public abstract_cal
{
public:
	int calculate()
	{
		return num_a * num_b;
	}
};

void test_29()
{
	// 1. 直接调用计算类内的func
	add_substract as_a;
	as_a.num_a = 11;
	as_a.num_b = 22;
	cout << as_a.num_a << "+" << as_a.num_b << "=" << as_a.calculate() << endl;

	// 2. 父类指针指向子类对象，调用计算方法
	//在堆区开辟
	abstract_cal* abc = new add_substract;
	abc->num_a = 55;
	abc->num_b = 66;
	cout << abc->num_a << "+" << abc->num_b << "=" << abc->calculate() << endl;
	//使用后进行销毁
	delete abc;
	//在堆区开辟
	abc = new mult;
	abc->num_a = 22;
	abc->num_b = 33;
	cout << abc->num_a << "*" << abc->num_b << "=" << abc->calculate() << endl;
	//使用后进行销毁
	delete abc;

}


int main_29()
{
	test_29();
	system("pause");
	return 0;
}

