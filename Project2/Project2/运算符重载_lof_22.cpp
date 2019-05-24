#include <iostream>
using namespace std;

class person
{
	//���Ϊ��Ԫ���������Է���˽�б���
	friend ostream& operator<<(ostream& out, person& p);
	friend person operator+(const person& a, const person& b);

public:
	//�޲ι���
	person()
	{}
	//�вι���
	person(int a, int b)
	{
		this->value_a = a;
		this->value_b = b;
	}
	int get_a()
	{
		return this->value_a;
	}
	int get_b()
	{
		return this->value_b;
	}
//��Ա�����ӷ�����
	person operator+(const person& add_item)
	{
		person temp;
		temp.value_a = add_item.value_a + this->value_a;
		temp.value_b = add_item.value_b + this->value_b;
		return temp;
	}

private:
	int value_a;
	int value_b;
};

//ȫ�ֺ����ӷ�����
person operator+(const person& a, const person& b)
{
	person temp;
	temp.value_a = a.value_a + b.value_a;
	temp.value_b = a.value_b + b.value_b;
	return temp;
}

//ȫ�ֺ���������������
//ostream��������ֻ��һ�������������ú���
ostream& operator<<(ostream &out,person & p)
{
	out <<"�������ֵa��"<< p.value_a << "\n�������ֵb��" << p.value_b << endl;
	return out;
}

void test_22()
{
	person a(19, 22);

	person b(9, 2);

	//���ú�������Ա���������ʵ���
	//person c = a.operator+(b);
	//���ú����򻯰�д��
	person c = a + b;
	cout << "�½�����c����ֵaΪ��" << c.get_a() << "\n�½�����c����ֵbΪ��" << c.get_b() << endl;

	//ȫ�ֺ����������صı��ʵ���
	person d = operator+(c, b);
	//���ú����򻯰�д��
	//person d = c + b;
	cout << "�½�����d����ֵaΪ��" << d.get_a() << "\n�½�����d����ֵbΪ��" << d.get_b() << endl;

	//���ع����person���������ʽ
	cout << d;
}

int main_22()
{
	test_22();
	system("pause");
	return 0;
}
