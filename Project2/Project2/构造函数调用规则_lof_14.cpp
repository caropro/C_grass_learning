#include <iostream>
using namespace std;


class test_class_14
{
public:
	//�������ʱ��Ĭ�ϻ����������յĹ��캯��
	test_class_14()
	{
		cout << "����Ĭ�Ϲ��캯��" << endl;
	}
	//���ֻ�������вι��죬����Զ������յĿ�������
	test_class_14(int value_input)
	{
		cout << "�����вι��캯��" << endl;
		value = value_input;
	}
	//���ֻ�����˿������캯�����򲻻��Զ�������������
	test_class_14(const test_class_14& c)
	{
		value = c.value;
		cout << "���ÿ������캯��" << endl;
	}
	int value;
};


void test_func_1()
{
	test_class_14 c;
}

int main_14()
{
	test_func_1();

	system("pause");
	return 0;
}