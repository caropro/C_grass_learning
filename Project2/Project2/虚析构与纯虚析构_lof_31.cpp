#include <iostream>
using namespace std;

class base_lof_31
{
public:
	base_lof_31()
	{
		cout << "�����޲ι������" << endl;
	}
	//�������麯��
	virtual void base_func_1() = 0;

	//������
	//virtual ~base_lof_31()
	//{
	//	cout << "����������������" << endl;
	//}
	//��������
	virtual ~base_lof_31() = 0;
};
//������������������֮�����ⲿ���¶���
base_lof_31::~base_lof_31() { cout<<"������������"<<endl; }

class child_lof_31 :public base_lof_31
{
public:
	//������޲ι��캯��
	child_lof_31()
	{
		cout << "�����޲ι������" << endl;
		//ָ��������ٵ�����
		child_Name = new string("hello_world");
	}
	virtual void base_func_1()
	{
		cout <<*child_Name<< "�������ʱ" << endl;
	}
	~child_lof_31()
	{
		if (child_Name != NULL)
		{
			cout << "����������������" << endl;
			delete child_Name;
			child_Name = NULL;
		}
	}

	//�����ָ������
	string* child_Name;
};

void test_31()
{
	//����ָ��ָ������
	base_lof_31* pointer_31 = new child_lof_31;
	pointer_31->base_func_1();
	//��������ָ��ʱ��ֻ��������������
	delete pointer_31;
}

int main_31()
{

	test_31();
	system("pause");
	return 0;
}