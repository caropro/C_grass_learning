#include <iostream>
using namespace std;

//ȷ�Ϸ���ֵ���� �������� ����
//a,b��������ʵ���ݣ���Ϊ�β�
int add_func(int a, int b)
{
	//����������
	int sum = a + b;
	//���ؽ��
	return sum;
}

int main_45()
{
	//a,bΪʵ�ʲ�����ʵ��
	int a = 8;
	int b = 9;
	//���������﷨��������(����)
	//��main�����е����Զ���ĺ���
	//�ڵ��ú���ʱ��ʵ�ε�ֵ�ᴫ�ݸ��β�
	int sum_1 = add_func(a, b);
	printf("%s+%s=", a, b);
	cout << sum_1 << endl;

	system("pause");
	return 0;
}