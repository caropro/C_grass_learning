#include <iostream>
using namespace std;

class c_12
{
public:

	c_12()
	{
		cout << "�޲�������" << endl;
	}

	c_12(int code_num)
	{
		code = code_num;
		cout << "�в�������" << endl;
	}
	//����������ÿ���ʹ���ֳɵ�ͬ���Ͷ���Ĳ�����������ʼ����ǰ����
	c_12(const c_12 &c)
	{
		code = c.code;
		cout << "��������" << endl;
	}


	~c_12()
	{
		cout << "������������" << endl;
	}
	int code;
};

void test_12()
{
	//1.���ŵ��÷���
	//c_12 c1;
	//c_12 c2(12);
	//c_12 c3(c2);
	//2.��ʾ���÷���
	c_12 c1;
	c_12 c2 = c_12(12);
	c_12 c3 = c_12(c2);//�Ҳ�������������û�б������Ƶĺ���������������

	c_12(44);//�������󴴽�֮�󣬻ᱻ��������
	//3.��ʽת����
	c_12 p4 = 12;//����c_12 p4(12)
	c_12 p5 = p4;//����c_12 p5(p4)��������

	cout << "end test 12" << endl;
}

int main_12()
{
	test_12();
	system("pause");
	return 0;
}