#include <iostream>
using namespace std;

class test_class_21;
//类中成员函数做友元
class visitor2
{
public:
	//声明一个无参构造函数
	visitor2();
	//声明一个访问函数
	void visit2();
private:
	//声明一个访问类的指针
	//为了能在当前类中调用类指针，需要先声明这个类
	test_class_21* test;
};

class test_class_21
{
	//声明此类中的成员函数为友元，需要先声明这个类与类中的函数
	friend void visitor2::visit2();
	//声明此类为友元
	friend class visitor;
	//声明此函数为友元
	friend void access(const test_class_21& test);

public:
	//无参构造函数
	test_class_21()
	{
		public_value = "当前类的公共属性被访问";
		private_value = "当前类的私有属性被访问";
	}
public:
	string public_value;
private:
	string private_value;
};

//全局函数做友元
void access(const test_class_21& test)
{
	cout << "从外部访问类内公共属性：" << test.public_value << endl;
	//如果不添加当前函数到类内作为函数友元，无法访问类内的私有属性
	cout << "从外部访问类内私有属性：" << test.private_value << endl;
}
void test_func21_1()
{
	test_class_21 t;
	access(t);
}


//类做友元
class visitor
{
public:
	//声明一个无参构造函数
	visitor();
	//声明一个访问函数
	void visit();
private:
	//声明一个访问类的指针
	test_class_21* test;
};

visitor::visitor()
{
	//在类外进行构造函数的定义，函数内部的public区域可以访问到private内容
	//内部访问类的指针指向一个堆区拓展
	test = new test_class_21;
}

void visitor::visit()
{
	//不加友元，默认只能访问到公共属性
	cout << "visitor正在访问内部指向的类：" << test->public_value << endl;
	//添加类友元后，可以对其他类的私有属性进行访问
	cout << "visitor正在访问内部指向的类：" << test->private_value << endl;
}

void test_func21_2()
{
	visitor gg;
	gg.visit();
}

//类中成员函数做友元，要在定义好友元目标类之后再做这步，否则空类型无法调用访问方式
visitor2::visitor2()
{
	//在类外进行构造函数的定义，函数内部的public区域可以访问到private内容
	//内部访问类的指针指向一个堆区拓展
	test = new test_class_21;
}

void visitor2::visit2()
{
	//不加友元，默认只能访问到公共属性
	cout << "visitor2正在访问内部指向的类：" << test->public_value << endl;
	//添加友元后，可以对其他类的私有属性进行访问
	cout << "visitor2正在访问内部指向的类：" << test->private_value << endl;
}

void test_func21_3()
{
	visitor2 kaka;
	kaka.visit2();
}

int main_21()
{
	//测试全局函数做友元
	test_func21_1();
	//测试类做友元
	test_func21_2();
	//测试类成员函数做友元
	test_func21_3();
	system("pause");
	return 0;
}