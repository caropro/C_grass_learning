#include <iostream>
using namespace std;

int arg_test(int a = 0, int b = 0);
//Ĭ�ϲ��������ض��壬�������ж����Ĭ��ֵ�Ĳ������ڶ���ʱ�����ظ�����
int arg_test(int a,int b)
{
	return(a + b);
}

//Ĭ��ֵ���ԣ�����Ĭ��ֵ�ò�����������в���������Ĭ��ֵ�Ĳ��������ܻ�ţ���Python���ƣ�
int add_func(int a = 0, int b = 0)
{
	return(a+b);
}

//���ز��ԣ����к���������ͬһ����������
int add_test()
{
	return 10;
}

//������ͬ���������أ�ֻ�з���ֵ��ͬ������������
int add_test(int a)
{
	return 10;
}
//ͬ���ƣ����Ͳ�ͬ�ĺ�����������
double add_test(double a)
{
	return 10;
}

float add_test(float c, int a)
{
	return 101;
}

void add_test(float a)
{
	cout << "void add_test(float a)" << endl;
}

//�������ռλ����
//������ռλ��������Ĭ��ֵ�Ĳ���
void mult_func(int a , int ,int b=10)
{
	cout << "func run" << endl;
}

int main_lof_5()
{
	cout << "1+1=" << add_func(1, 1) << endl;
	mult_func(11, 11, 11);
	cout<<add_test();
	system("pause");
	return 0;
}

