#include <iostream>
using namespace std;

class test_class_17
{
public:
	//��̬����ֻ���Է��ʾ�̬��������
	static void st_func()
	{
		cout << "��̬��������" << endl;
		cout << "��̬���� a��ֵΪ��" << st_value_a << endl;
		st_value_a = 999;
		cout << "�޸ĺ�̬���� a��ֵΪ��" << st_value_a << endl;
	}

	//��̬��Ա�����������ڽ�����������������г�ʼ��
	static int st_value_a;
	static int st_value_b;

private:
	//˽��Ȩ�޵ľ�̬�������ⲿ�޷����á�
	static void st_func_p()
	{
		cout << "��̬��������" << endl;
		cout << "��̬���� a��ֵΪ��" << st_value_a << endl;
		st_value_a = 999;
		cout << "�޸ĺ�̬���� a��ֵΪ��" << st_value_a << endl;
	}

	//��̬��Ա�����������ڽ�����������������г�ʼ����˽�б������Գ�ʼ�������ܷ���
	static int st_value_c;
};

//���Գ�ʼ��
int test_class_17::st_value_a = 134;
int test_class_17::st_value_c = 4;

void test_cunc_1()
{
	test_class_17 t;
	//һ����Ϊ��������Խ��з��ʡ�
	cout << "��ǰ��ֵa��ֵΪ��" << t.st_value_a << endl;
	t.st_value_a = 133;
	cout << "��ǰ��ֵa��ֵΪ��" << t.st_value_a << endl;
	//һ����Ϊ���������з��ʡ�
	test_class_17 t2;
	cout << "��ǰ��ֵa��ֵΪ��" << test_class_17::st_value_a << endl;

	//˽�����Բ��ܷ��ʣ�ֻ�ܳ�ʼ����
	//cout << "��ǰ��ֵc��ֵΪ��" << test_class_17::st_value_c << endl;
}

void test_cunc_2()
{
	//ֱ�ӵ������ڵ�func
	test_class_17::st_func();
}

int main_17()
{
	test_cunc_1();
	test_cunc_2();
	system("pause");
	return 0;
}