#include <iostream>
using namespace std;

//��������һ���麯����Ϊ�Ӽ�������չ��׼��
class abstract_cal
{
public:
	virtual int calculate()
	{
		return 0;
	}
	int num_a;
	int num_b;
};

class add_substract :public abstract_cal
{
public:
	int calculate()
	{
		return num_a + num_b;
	}
};

class mult :public abstract_cal
{
public:
	int calculate()
	{
		return num_a * num_b;
	}
};

void test_29()
{
	// 1. ֱ�ӵ��ü������ڵ�func
	add_substract as_a;
	as_a.num_a = 11;
	as_a.num_b = 22;
	cout << as_a.num_a << "+" << as_a.num_b << "=" << as_a.calculate() << endl;

	// 2. ����ָ��ָ��������󣬵��ü��㷽��
	//�ڶ�������
	abstract_cal* abc = new add_substract;
	abc->num_a = 55;
	abc->num_b = 66;
	cout << abc->num_a << "+" << abc->num_b << "=" << abc->calculate() << endl;
	//ʹ�ú��������
	delete abc;
	//�ڶ�������
	abc = new mult;
	abc->num_a = 22;
	abc->num_b = 33;
	cout << abc->num_a << "*" << abc->num_b << "=" << abc->calculate() << endl;
	//ʹ�ú��������
	delete abc;

}


int main_29()
{
	test_29();
	system("pause");
	return 0;
}

