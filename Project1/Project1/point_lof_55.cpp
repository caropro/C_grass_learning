#include <iostream>
using namespace std;

//����һ����ֵ�ĺ���
void swap_none(int a, int b);

//����һ������ַ�ĺ���
void swap(int* p1, int* p2);

int main_55()
{
	int a = 10;
	int b = 20;
	//�Ƚ��д�ֵ�������β��ܲ���Ӱ��
	swap_none(a, b);
	cout << "�������a��" << a << endl;
	cout << "�������b��" << b << endl;

	//�ٽ��д���ַ
	swap(&a, &b);
	cout << "�������a��" << a << endl;
	cout << "�������b��" << b << endl;

	system("pause");
	return 0;
}

//���䶨��ǰ��ĺ���
void swap_none(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;

	cout << "ֵ�������a��" << a << endl;
	cout << "ֵ�������b��" << b << endl;
}

//
void swap(int * p1, int * p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}