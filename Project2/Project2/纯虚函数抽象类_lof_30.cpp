#include <iostream>
using namespace std;

//������
class baverage_make
{
public:
	//���麯��
	virtual void step_1() = 0;
	virtual void step_2() = 0;
	virtual void step_3() = 0;
	virtual void step_4() = 0;

	void make()
	{
		step_1();
		step_2();
		step_3();
		step_4();
	}
};

class tea :public baverage_make
{
public:
//��д�����еĴ��麯��
	virtual void step_1()
	{
		cout << "��һ������ˮ" << endl;
	}
	virtual void step_2()
	{
		cout << "�ڶ���������" << endl;
	}
	virtual void step_3()
	{
		cout << "�����������뱭��" << endl;
	}
	virtual void step_4()
	{
		cout << "���Ĳ������븨��" << endl;
	}
};

void test_30()
{
	//�������޷�ʵ��������
	//��������������Ҫ��д�����еĴ��麯��������Ҳ���ڳ�����
	//Base test;
	//new Base;
	baverage_make* test_class = new tea;
	test_class->make();
	delete test_class;
}
int main_30()
{
	test_30();
	system("pause");
	return 0;
}