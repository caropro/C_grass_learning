#include <iostream>
using namespace std;

class Base_level
{
public:
	int base_value;
};

class branch_a : virtual public Base_level
{
};

class branch_b : virtual public Base_level
{
};
//�̳�������������ݣ�base_value���ϲ������ж��е�ͬ�����ԣ����̳к����ĸ�
class test_class :public branch_a, public branch_b
{
};

void test_func_27()
{
	test_class t;
	//�޸������ֵ
	t.test_class::base_value = 22;
	cout << "t ��basevalue" << t.base_value << endl;
	//�޸ĸ���a��ֵ
	t.branch_a::base_value = 33;//{vbptr} ��������������̳У�virtual base pointer
	cout << "t ��basevalue" << t.base_value << endl;
	//�޸ĸ���b��ֵ
	t.branch_b::base_value = 55;
	cout << "t ��basevalue" << t.base_value << endl;
	//�������޸ģ������޸�����������Ե�ֵ��������ͬһ��

}

int main_27()
{
	test_func_27();
	system("pause");
	return 0;
}
