#include <iostream>
using namespace std;

class test_class_20
{
public:
	//��������const�������ݷ����βκ�
	void func_1() const
	{
		//�������в�������ǰ�����б�������ͨ�޸�
		//this.value_a = 111;
		cout << value_a << endl;
		this->value_b = 111;
		cout << value_b << endl;
	}
	//��ͨ�޲κ���
	void func_2()
	{}

	int value_a;
	//���mutable�󣬱��������ڳ������л򱻶�������޸�
	mutable int value_b;

};

void test_func()
{
	//��ͨ������Ե��ó�������Ҳ�����޸�mutable�ı���
	test_class_20 a;
	a.value_a = 111;
	a.func_1();
	a.value_b = 222;

	//������
	//const test_class_20 b;
	//b.value_b = 333;
	//cout << "�������е���ֵb��" << b.value_b << endl;
	//b.func_1();
	//������ֻ�ܵ��ó�����
	//b.func_2();
}

int main_20()
{
	test_func();
	system("pause");
	return 0;
}