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

//����̳��Ը���
//�����̳У��̳и����еĹ����뱣�����ݣ�������ԭ�з���
//class child_class :public father_class

//�����̳У��̳и����еĹ����뱣�����ݣ���ת��Ϊ��������
//class child_class :protected father_class

//˽�м̳У��̳и����еĹ����뱣�����ݣ���ת��Ϊ˽������
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