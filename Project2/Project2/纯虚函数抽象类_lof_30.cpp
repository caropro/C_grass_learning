#include <iostream>
using namespace std;

//抽象类
class baverage_make
{
public:
	//纯虚函数
	virtual void step_1() = 0;
	virtual void step_2() = 0;
	virtual void step_3() = 0;
	virtual void step_4() = 0;

	void make()
	{
		step_1();
		step_2();
		step_3();
		step_4();
	}
};

class tea :public baverage_make
{
public:
//重写父类中的纯虚函数
	virtual void step_1()
	{
		cout << "第一步：煮水" << endl;
	}
	virtual void step_2()
	{
		cout << "第二步：冲泡" << endl;
	}
	virtual void step_3()
	{
		cout << "第三步：倒入杯中" << endl;
	}
	virtual void step_4()
	{
		cout << "第四步：加入辅料" << endl;
	}
};

void test_30()
{
	//抽象类无法实例化对象
	//抽象类的子类必须要重写父类中的纯虚函数，否则也属于抽象类
	//Base test;
	//new Base;
	baverage_make* test_class = new tea;
	test_class->make();
	delete test_class;
}
int main_30()
{
	test_30();
	system("pause");
	return 0;
}