#include <iostream>
using namespace std;

class test_class_15
{
public:
	//�޲ι��캯��
	test_class_15()
	{
		cout << "�޲ι��캯������" << endl;
	}
	//���ι��캯��
	test_class_15(int test_value_input , int test_value2_input)
	{
		cout << "���ι��캯������" << endl;
		test_value = test_value_input;
		test_value_2 = new int(test_value2_input);//�����ݴ����ʱ����ָ�����͵Ĳ�����ָ���¿��ص��ڴ��ַ�����⻹δʹ����ͱ����յ���
	}
	//�������캯��
	test_class_15(const test_class_15 & tc)
	{
		cout << "�������캯������" << endl;
		test_value = tc.test_value;//Ĭ�ϴ�����ֵ
		test_value_2 = new int(*tc.test_value_2);//�ڽ��п�����ʱ��ͬ���ι��죬�ٿ��ض����洢����
	}
	//���������������ڶ��������洢
	~test_class_15()
	{
		cout << "�����������������պ����ڵ��ֶ��ڴ�" << endl;
		delete test_value_2;
	}

	int test_value;
	int * test_value_2;
};


int main_15()
{
	test_class_15 t1(10, 22);
	cout << "t1��������ֵ�ֱ�Ϊ��" << t1.test_value << "\n" << *t1.test_value_2 << endl;
	
	test_class_15 t2(t1);
	cout << "t2��������ֵ�ֱ�Ϊ��" << t2.test_value << "\n" << *t2.test_value_2 << endl;
	system("pause");
	return 0;
}