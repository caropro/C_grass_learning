#include <iostream>
using namespace std;

class test_class24
{
public:
	//�вι��캯��
	test_class24(int input_value)
	{
		//����������ݿ��ٵ�����
		test_value = new int(input_value);
	}

	test_class24& operator=(test_class24& p)
	{
		if (test_value != NULL)
		{
			//�������Ĭ�ϵĿ������캯������ִ��ǳ����������ǰ����������񱻻��յ�ʱ�򣬿��������ľͻ����޷�ɾ��ͬһ�����ڴ������
			delete test_value;
			test_value = NULL;
		}
		test_value = new int(*p.test_value);

		return *this;
	}
	//��ϵ��������أ��ж�����ͬ���ͱ����Ƿ���ȡ�
	bool operator==(test_class24& p)
	{
		if (*this->test_value == *p.test_value)
		{
			return true;
		}
		return false;
	}

	bool operator!=(test_class24& p)
	{
		if (*this->test_value == *p.test_value)
		{
			return false;
		}
		return true;
	}

	//��������������֮ǰ��ָ��
	~test_class24()
	{
		if (test_value != NULL)
		{
			//�������Ĭ�ϵĿ������캯������ִ��ǳ����������ǰ����������񱻻��յ�ʱ�򣬿��������ľͻ����޷�ɾ��ͬһ�����ڴ������
			delete test_value;
			test_value = NULL;
		}
	}
public:
	//����ָ�����͵����ݣ�������new�����ĵ�ַ
	int * test_value;

};


void test_func24()
{
	test_class24 a(10);

	test_class24 b(22);

	b = a;

	cout << "����a��ֵ��" << *a.test_value << endl;

	cout << "����b��ֵ��" << *b.test_value << endl;

	if (a == b)
	{
		cout << "a��b���" << endl;
	}

	if (a != b)
	{
		cout << "a��b�����" << endl;
	}
}

int main()
{
	test_func24();

	system("pause");
	return 0;
}