#include <iostream>
using namespace std;

int main_53()
{
	int a = 10;
	int b = 21;
	//1.const����ָ�룬���Ը�ָ�򣬲����Ը�ֵ
	//��ָ��a
	const int* p1 = &a;
	cout << "��ʼָ��λ�ã�" << p1 << endl;
	cout << "��ʼָ���ֵ��" << *p1 << endl;
	//�޸�ָ��
	p1 = &b;
	cout << "�޸ĺ��ָ��λ�ã�" << p1 << endl;
	cout << "�޸ĺ��ָ���ֵ��" << *p1 << endl;
	
	//2.const���γ�����ֻ���Ը�ֵ
	int * const p2 = &a;
	cout << "��ӡp2��ֵ" << *p2 << endl;
	//�޸�ֵ
	*p2 = 101;
	cout << "��ӡp2��ֵ" << *p2 << endl;

	//3.const������ָ�룬�����γ�����ʲô�������Ը�
	const int* const p3 = &b;
	cout << "p3�ĵ�ַ��" << p3 << endl;
	cout << "p3��ֵ��" << *p3 << endl;

	system("pause");
	return 0;
}