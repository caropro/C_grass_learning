#include <iostream>
using namespace std;

//����һ����

class Person_construct
{
//���ڲ��������캯��������ʼ�����ã�ֻ�����������ʱ�����һ��
public:
	//���캯�����Ժ��в�������������Ҫ����һ��
	Person_construct()
	{
		cout << "���г�ʼ������" << endl;
	}
//����һ�������������ڳ������ʱ����һ��
	~Person_construct()
	{
		cout << "������������" << endl;
	}
};

void test_print()
{
	cout << "fuck c++" << endl;
	Person_construct p;
}

int main_11()
{
	test_print();
	system("pause");
	return 0;
}
