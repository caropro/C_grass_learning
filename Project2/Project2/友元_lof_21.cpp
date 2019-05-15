#include <iostream>
using namespace std;

class test_class_21;
//���г�Ա��������Ԫ
class visitor2
{
public:
	//����һ���޲ι��캯��
	visitor2();
	//����һ�����ʺ���
	void visit2();
private:
	//����һ���������ָ��
	//Ϊ�����ڵ�ǰ���е�����ָ�룬��Ҫ�����������
	test_class_21* test;
};

class test_class_21
{
	//���������еĳ�Ա����Ϊ��Ԫ����Ҫ����������������еĺ���
	friend void visitor2::visit2();
	//��������Ϊ��Ԫ
	friend class visitor;
	//�����˺���Ϊ��Ԫ
	friend void access(const test_class_21& test);

public:
	//�޲ι��캯��
	test_class_21()
	{
		public_value = "��ǰ��Ĺ������Ա�����";
		private_value = "��ǰ���˽�����Ա�����";
	}
public:
	string public_value;
private:
	string private_value;
};

//ȫ�ֺ�������Ԫ
void access(const test_class_21& test)
{
	cout << "���ⲿ�������ڹ������ԣ�" << test.public_value << endl;
	//�������ӵ�ǰ������������Ϊ������Ԫ���޷��������ڵ�˽������
	cout << "���ⲿ��������˽�����ԣ�" << test.private_value << endl;
}
void test_func21_1()
{
	test_class_21 t;
	access(t);
}


//������Ԫ
class visitor
{
public:
	//����һ���޲ι��캯��
	visitor();
	//����һ�����ʺ���
	void visit();
private:
	//����һ���������ָ��
	test_class_21* test;
};

visitor::visitor()
{
	//��������й��캯���Ķ��壬�����ڲ���public������Է��ʵ�private����
	//�ڲ��������ָ��ָ��һ��������չ
	test = new test_class_21;
}

void visitor::visit()
{
	//������Ԫ��Ĭ��ֻ�ܷ��ʵ���������
	cout << "visitor���ڷ����ڲ�ָ����ࣺ" << test->public_value << endl;
	//�������Ԫ�󣬿��Զ��������˽�����Խ��з���
	cout << "visitor���ڷ����ڲ�ָ����ࣺ" << test->private_value << endl;
}

void test_func21_2()
{
	visitor gg;
	gg.visit();
}

//���г�Ա��������Ԫ��Ҫ�ڶ������ԪĿ����֮�������ⲽ������������޷����÷��ʷ�ʽ
visitor2::visitor2()
{
	//��������й��캯���Ķ��壬�����ڲ���public������Է��ʵ�private����
	//�ڲ��������ָ��ָ��һ��������չ
	test = new test_class_21;
}

void visitor2::visit2()
{
	//������Ԫ��Ĭ��ֻ�ܷ��ʵ���������
	cout << "visitor2���ڷ����ڲ�ָ����ࣺ" << test->public_value << endl;
	//�����Ԫ�󣬿��Զ��������˽�����Խ��з���
	cout << "visitor2���ڷ����ڲ�ָ����ࣺ" << test->private_value << endl;
}

void test_func21_3()
{
	visitor2 kaka;
	kaka.visit2();
}

int main_21()
{
	//����ȫ�ֺ�������Ԫ
	test_func21_1();
	//����������Ԫ
	test_func21_2();
	//�������Ա��������Ԫ
	test_func21_3();
	system("pause");
	return 0;
}