#include <iostream>
using namespace std;

class test13
{
public:
	//�޲ι��캯��
	test13()
	{
		cout << "�޲��������캯�����á�" << endl;
	}

	//���ι��캯��
	test13(int value)
	{
		cout << "�����������캯�����á�" << endl;
		test13_value = value;
	}
	//�޲ι��캯��
	test13(const test13 & t)
	{
		test13_value = t.test13_value;
		cout << "�������캯�����á�" << endl;
	}
	//��������
	~test13()
	{
		cout << "������������" << endl;
	}
	//�����ڲ�����
	int test13_value;
};
//����������ã�ʹ�����ж�����г�ʼ��
void test_a()
{
	test13 testa(145);
	test13 testb(testa);

	cout << "test a ��ֵ��" << testa.test13_value << endl;
	cout << "test b ��ֵ��" << testb.test13_value << endl;
}

//����������ã�������������Ϊ�������뺯����ʱ��
void test_b(test13 test)
{
	cout << "test13 �������ݴ���" << endl;
	cout << "�������ݵ���ֵΪ��" << test.test13_value << endl;
}


//����������ã�������������Ϊ��������ֵ��ʱ��
test13 test_c()
{
	test13 test(166);
	return(test);
}


int main_13()
{
	//test_a();

	//test13 t(123);
	//test_b(t);

	test13 test = test_c();
	cout << "���ص�test13������ֵΪ��" << test.test13_value << endl;

	system("pause");
	return 0;
}