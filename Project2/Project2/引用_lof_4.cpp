#include <iostream>
using namespace std;

//���������õ������У�ֱֵ�ӻ���������
void swap_value(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
//
int & return_ref_var()
{
	int a = 22;
	//���ر���a�����ã����a�Ǿֲ�������������õĻ�ֻ�����ڲ�����ʱ����
	return a;
}

int & return_ref_static()
{
	static int a = 22;
	//���ر���a�����ã����a�Ǿ�̬�������洢��ȫ�����������ں������ú󱻻���
	return a;
}

void print_val(const int& a)
{
	//a = 100;�����ε������޷��޸�ֵ
	cout << "���ֵ��" << a << endl;
}

int main()
{
	int a = 10;
	int& b = a;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	int c = 100;
	swap_value(c, a);

	cout << "a=" << a << endl;
	cout << "c=" << c << endl;

	//���þֲ���������ֵ���������������֮��Ͳ������������
	int& ref = return_ref_var();
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;

	//������õķ���ֵ�Ǿ�̬������ֻ�г��������Ż���յ�
	int& ref1 = return_ref_static();
	cout << "ref1 = " << ref1 << endl;
	cout << "ref1 = " << ref1 << endl;

	print_val(a);
	system("pause");
	return 0;
}
