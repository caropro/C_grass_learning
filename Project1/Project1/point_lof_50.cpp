#include <iostream>
using namespace std;

int main_50()
{
	//����һ������
	int a = 10;
	//����һ��ָ��
	int * p;
	
	p = &a;
	//��ӡһ�±���ָ��λ��
	cout << "����a���ڴ��ַ��" << &a << endl;
	cout << "p����ĵ�ַ��" << p << endl;

	//ͨ�����������޸�ָ��ָ���ڴ������������
	*p = 233;
	cout << "�޸ĺ�a�����ݣ�" << a << endl;
	cout << "�޸ĺ�*p�����ݣ�" << *p << endl;

	system("pause");
	return 0;
}