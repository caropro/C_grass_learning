#include <iostream>
using namespace std;

//ȫ�ֱ���
int g_a = 10;

//const���ε�ȫ�ֱ�������ȫ�ֳ���
const int const_g_c = 10;

int main_1()
{
	//�ֲ�����
	int l_a = 10;

	//��̬����
	static int s_l_b = 10;

	//�����������
	cout << "ȫ�ֱ���g_a���ڴ��ַ��" << (int)&g_a << endl;
	cout << "�ֲ�����l_a���ڴ��ַ��" << (int)&l_a << endl;
	cout << "��̬����s_l_a���ڴ��ַ��" << (int)& s_l_b << endl;

	//const���εľֲ����������ֲ�����
	const int const_c = 10;

	//�ַ�������
	"hello world";

	//�����������
	cout << "�ַ����������ڴ��ַ��" << (int) & "Hello world" << endl;
	cout << "ȫ�ֳ���const_g_c���ڴ��ַ��" << (int)& const_g_c << endl;
	cout << "�ֲ�����const_c���ڴ��ַ��" << (int)& const_c << endl;

	system("pause");
	return 0;
}



