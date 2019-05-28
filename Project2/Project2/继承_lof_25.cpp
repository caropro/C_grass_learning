#include <iostream>
using namespace std;

class father_class
{
public:
	void print_state()
	{
		cout << "father class!!!" << endl;
	}
	void print_init()
	{
		cout << "init class!!!" << endl;
	}
protected:
	int inhert = 100;
};

//子类继承自父类
//公共继承：继承父类中的公共与保护数据，并保持原有分类
//class child_class :public father_class

//保护继承：继承父类中的公共与保护数据，都转变为保护数据
//class child_class :protected father_class

//私有继承：继承父类中的公共与保护数据，都转变为私有数据
//class child_class :private father_class

class child_class :public father_class
{
public:
	void print_child()
	{
		cout << "Child Class!!!" << endl;
	}
	void print_father_value()
	{
		cout << "FATHER VALUE:" << this->inhert << endl;
	}
};

void func_test_25()
{
	child_class test_class;
	test_class.print_state();
	test_class.print_init();
	test_class.print_child();
	test_class.print_father_value();
}

int main_25()
{
	func_test_25();
	system("pause");
	return 0;
}