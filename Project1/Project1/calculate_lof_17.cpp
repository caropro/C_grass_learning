#include <iostream>
using namespace std;

int main_17()
{
	//ǰ�õ���
	int a = 9;
	++a;//a=a+1
	cout << "a = " << a << endl;
	//���õ���
	int a2 = 9;
	a2++;//a=a+1
	cout << "a2 = " << a2 << endl;

	//ǰ�ú�������
	int b = ++a * 10;
	//ǰ�õ������ȵ��ӣ�������
	cout << "b = " << b << endl;
	
	int b2 = a2++ * 10;
	//���õ����Ƚ������㣬����б�������
	cout << "b2 = " << b2 << endl;

	cout << "a = " << a << endl;
	cout << "a2 = " << a2 << endl;
	system("pause");
	return 0;
}

