#include <iostream>
using namespace std;

class test_class_18
{
	//Ĭ��˽��
	//����
	int value;
	//��̬����
	static int c_value;
	//��Ա����
	void func() {}
	//��̬��Ա����
	static void func_2() {}
};

class test_class_18_blk
{
};


//���ڵľ�̬����Ҫ���ⲿ����
int test_class_18::c_value = 000;

int main_18()
{
	test_class_18 t;
	cout << "tռ�ռ��С��" << sizeof(t) << endl;

	test_class_18_blk t_blk;
	cout << "t_blkռ�ռ��С��" << sizeof(t_blk) << endl;
	system("pause");
	return 0;
}
