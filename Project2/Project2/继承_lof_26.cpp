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

	//�����������ĺ���
	ic_1.auto_haha();
	//������ø����ͬ������
	ic_1.Base_Class::auto_haha();
}

int main()
{

	test_func_26();
	system("pause");
	return 0;
}