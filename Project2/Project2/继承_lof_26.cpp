//�̳���������˳��
#include <iostream>
using namespace std;

class Base_Class
{
public:
	//�޲ι��캯��
	Base_Class()
	{
		base_value = 11;
		cout << "Base ���޲ι������" << endl;
	}
	//��������
	~Base_Class() 
	{
		cout << "Base ��������������" << endl;
	}

	void auto_haha()
	{
		cout << "Base haha" << endl;
	}
public:
	int base_value;
};

class Base_Class2
{
public:
	//�޲ι��캯��
	Base_Class2()
	{
		base_value = 11;
		cout << "Base2 ���޲ι������" << endl;
	}
public:
	int base_value;
};

class inhert_Class : public Base_Class
{
public:
	// �޲ι��캯��
	inhert_Class() 
	{
		cout << "�̳�����޲ι������" << endl;
	}
	// ��������
	~inhert_Class()
	{
		cout << "�̳������������" << endl;
	}
	//ͬ����������
	void auto_haha()
	{
		cout << "Child haha" << endl;
	}
	//ͬ���������¸�ֵ
	int base_value = 999;
};

void test_func_26()
{
	inhert_Class ic_1;
	//�ȹ��츸�࣬�ٹ�������
	//���������࣬����������
	cout <<"����鿴�Լ�������ֵ"<< ic_1.base_value << endl;
	cout << "����鿴�Ը���ͬ��������ֵ" << ic_1.Base_Class::base_value << endl;

	//�����������ĺ����������ڸ����к����Ƿ��в����ض�����и���
	ic_1.auto_haha();
	//������ø����ͬ������
	ic_1.Base_Class::auto_haha();
}

//�ж�������
class inhert_Class2 : public Base_Class ,public Base_Class2
{
public:
	// �޲ι��캯��
	inhert_Class2()
	{
		cout << "�̳�����޲ι������" << endl;
	}
};


void test_func_26_2()
{
	inhert_Class2 p2;
	//������������к������������Ի��ߺ��������������ʱ��Ҫ����������
	//cout << "P2 ���ʸ���1����ֵ��" << p2.base_value << endl; ֱ��������ʵ���������Ի��ߺ������ûᱨ��"����ȷ"
	cout << "P2 ���ʸ���1����ֵ��" << p2.Base_Class::base_value << endl;
	cout << "P2 ���ʸ���2����ֵ��" << p2.Base_Class2::base_value << endl;
}

int main_26()
{
	test_func_26();

	test_func_26_2();
	system("pause");
	return 0;
}