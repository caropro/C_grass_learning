//继承与析构的顺序
#include <iostream>
using namespace std;

class Base_Class
{
public:
	//无参构造函数
	Base_Class()
	{
		base_value = 11;
		cout << "Base 的无参构造调用" << endl;
	}
	//析构函数
	~Base_Class() 
	{
		cout << "Base 的析构函数调用" << endl;
	}

	void auto_haha()
	{
		cout << "Base haha" << endl;
	}
public:
	int base_value;
};

class inhert_Class : public Base_Class
{
public:
	// 无参构造函数
	inhert_Class() 
	{
		cout << "继承项的无参构造调用" << endl;
	}
	// 析构函数
	~inhert_Class()
	{
		cout << "继承项的析构调用" << endl;
	}
	//同名函数重载
	void auto_haha()
	{
		cout << "Child haha" << endl;
	}
	//同名属性重新赋值
	int base_value = 999;
};

void test_func_26()
{
	inhert_Class ic_1;
	//先构造父类，再构造子类
	//先析构子类，再析构父类
	cout <<"子类查看自己的属性值"<< ic_1.base_value << endl;
	cout << "子类查看自父类同名的属性值" << ic_1.Base_Class::base_value << endl;

	//子类调用自身的函数
	ic_1.auto_haha();
	//子类调用父类的同名函数
	ic_1.Base_Class::auto_haha();
}

int main()
{

	test_func_26();
	system("pause");
	return 0;
}