#include <iostream>
using namespace std;

class test_class_19 
{
public:
	test_class_19(int value)
	{
		//���β����������������������ͬ��ʱ��
		//ʹ��thisָ�룬����ָ��ǰ�������ڶ���
		this->value = value;
	}
	//�������ͺ�����֮���Է������ö�����Ϊ�˷����޸ĺ�Ķ�������
	//test_class_19 *���߷��ص�ǰ���ͺ���ָ�룬�ٽ�����
	test_class_19& add_value(const test_class_19& t)
	{
		this->value += t.value;
		//this�ǵ�ǰ�����ָ�룬���ؽ����ú�ģ����ǵ�ǰ��������
		return *this;
	}
	void show_value()
	{
		if (this == NULL)
		{
			cout << "��ǰָ��Ϊ��" << endl;
			return;
		}
		cout << "��ǰ��ֵΪ��" << this->value << endl;
	}
	int value;
};

void func_1()
{
	test_class_19 t1(19);
	cout << "��ǰ����������Ϊ��" << t1.value << endl;

	test_class_19 t2(29);
	cout << "��ǰt2����������Ϊ��" << t2.value << endl;
	//��Ϊÿ�ε��ú���֮�󶼷��ض����������Կ�����������
	//��ʽ���˼��
	t2.add_value(t1).add_value(t1);
	cout << "��ǰt2����������Ϊ��" << t2.value << endl;


	test_class_19 * t3=NULL;
	t3->show_value();

}



int main_19()
{
	func_1();
	system("pause");
	return 0;
}