#include <iostream>
using namespace std;

class base_lof_31
{
public:
	base_lof_31()
	{
		cout << "父类无参构造调用" << endl;
	}
	//创建纯虚函数
	virtual void base_func_1() = 0;

	//虚析构
	//virtual ~base_lof_31()
	//{
	//	cout << "父类析构函数调用" << endl;
	//}
	//纯虚析构
	virtual ~base_lof_31() = 0;
};
//类内声明过纯虚析构之后，在外部重新定义
base_lof_31::~base_lof_31() { cout<<"纯虚析构调用"<<endl; }

class child_lof_31 :public base_lof_31
{
public:
	//子类的无参构造函数
	child_lof_31()
	{
		cout << "子类无参构造调用" << endl;
		//指向堆区开辟的数据
		child_Name = new string("hello_world");
	}
	virtual void base_func_1()
	{
		cout <<*child_Name<< "子类调用时" << endl;
	}
	~child_lof_31()
	{
		if (child_Name != NULL)
		{
			cout << "子类析构函数调用" << endl;
			delete child_Name;
			child_Name = NULL;
		}
	}

	//子类的指针数据
	string* child_Name;
};

void test_31()
{
	//父类指针指向子类
	base_lof_31* pointer_31 = new child_lof_31;
	pointer_31->base_func_1();
	//析构父类指针时，只会析构父类自身
	delete pointer_31;
}

int main_31()
{

	test_31();
	system("pause");
	return 0;
}