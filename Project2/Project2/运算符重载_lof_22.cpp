#include <iostream>
using namespace std;

class person
{
	//添加为友元函数，可以访问私有变量
	friend ostream& operator<<(ostream& out, person& p);
	friend person operator+(const person& a, const person& b);

public:
	//无参构造
	person()
	{}
	//有参构造
	person(int a, int b)
	{
		this->value_a = a;
		this->value_b = b;
	}
	int get_a()
	{
		return this->value_a;
	}
	int get_b()
	{
		return this->value_b;
	}
//成员函数加法重载
	person operator+(const person& add_item)
	{
		person temp;
		temp.value_a = add_item.value_a + this->value_a;
		temp.value_b = add_item.value_b + this->value_b;
		return temp;
	}

private:
	int value_a;
	int value_b;
};

//全局函数加法重载
person operator+(const person& a, const person& b)
{
	person temp;
	temp.value_a = a.value_a + b.value_a;
	temp.value_b = a.value_b + b.value_b;
	return temp;
}

//全局函数左移运算重载
//ostream函数对象只有一个，所以用引用函数
ostream& operator<<(ostream &out,person & p)
{
	out <<"输出函数值a："<< p.value_a << "\n输出函数值b：" << p.value_b << endl;
	return out;
}

void test_22()
{
	person a(19, 22);

	person b(9, 2);

	//内置函数（成员函数）本质调用
	//person c = a.operator+(b);
	//内置函数简化版写法
	person c = a + b;
	cout << "新建函数c的数值a为：" << c.get_a() << "\n新建函数c的数值b为：" << c.get_b() << endl;

	//全局函数运算重载的本质调用
	person d = operator+(c, b);
	//内置函数简化版写法
	//person d = c + b;
	cout << "新建函数d的数值a为：" << d.get_a() << "\n新建函数d的数值b为：" << d.get_b() << endl;

	//重载过后的person类型输出方式
	cout << d;
}

int main_22()
{
	test_22();
	system("pause");
	return 0;
}
