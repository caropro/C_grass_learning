#include <iostream>
using namespace std;

//����һ���ṹ�壬��������python��class�Ĳ��ֹ���
//������������������
struct test_data_pack
{
	string name;
	int data_info;
	int data_index;
};
//�����������������Ͳ���ֵ
struct test_data_pack2
{
	string name="�ٲٲٲ�";
	int data_info=3333;
	int data_index=3;
};

//�����������������Ͳ���ֵ����ֱ�Ӵ�������
struct test_data_pack3
{
	string name = "fuck";
	int data_info = 4444;
	int data_index = 4;
}test4;

int main_57()
{
	//�ڴ����ṹ�����ʱ���и�ֵ
	//struct�ؼ��ֿ���ʡ��
	test_data_pack test1 = { "test_test", 11, 1 };
	cout << "test1������ݣ�" << endl;
	cout << test1.name << endl;
	cout << test1.data_info << endl;
	cout << test1.data_index << endl;
	//�ڴ����ṹ���������и�ֵ
	struct test_data_pack test2;
	test2.name = "hahahaha";
	test2.data_info = 1111;
	test2.data_index = 2;
	cout << "test2������ݣ�" << endl;
	cout << test2.name << endl;
	cout << test2.data_info << endl;
	cout << test2.data_index << endl;
	//�ṹ���Դ�Ĭ������
	struct test_data_pack2 test3;
	cout << "test3������ݣ�" << endl;
	cout << test3.name << endl;
	cout << test3.data_info << endl;
	cout << test3.data_index << endl;
	//�����ṹ��ʱĬ�ϴ�������
	struct test_data_pack3 test4;
	cout << "test4������ݣ�" << endl;
	cout << test4.name << endl;
	cout << test4.data_info << endl;
	cout << test4.data_index << endl;
	system("pause");
	return 0;
}