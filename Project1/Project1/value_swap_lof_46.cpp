#include <iostream>
using namespace std;

//�����������Ҫ����ֵ��������void����������
void swap(int num_1, int num_2)
{
	cout << "����ǰ����ֵ��" << endl;
	cout << "num_1=" << num_1 << endl;
	cout << "num_2=" << num_2 << endl;

	int temp=num_1;
	num_1 = num_2;
	num_2 = temp;

	cout << "���������ֵ��" << endl;
	cout << "num_1=" << num_1 << endl;
	cout << "num_2=" << num_2 << endl;


	//����Ҫ����ֵ��ʱ����Բ�дreturn
	return;//��Ҫд�Ļ������治Ҫ����ֵ��
}

int main_46()
{
	int a = 10;
	int b = 25;
	swap(a, b);

	cout << "�β�ת�����Խ���--------------" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");
	return 0;
}