#include <iostream>
using namespace std;

int* func()
{
	int* p = new int(10);//ʹ��new�ڶ�������������
	return p;//����ָ���ַ
}

void test()
{
	int* p = func();//�ֲ��������յ�ַ��Ϣ

	cout << *p << endl;
	cout << *p << endl;

	delete p;
	//����֮��Ͳ����ٷ��������ַ��
}

//�ڶ�����������
void test2()
{
	int * arr = new int[10];//ʹ�������ű���������������Ԫ�ظ���

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 11;
	}
	for (int i = 0; i < 10; i++)
	{
		cout<<arr[i]<<endl;
	}
	//��������ʱ��������
	delete[] arr;
}

int main_3()
{

	test();
	test2();
	system("pause");
	return 0;
}