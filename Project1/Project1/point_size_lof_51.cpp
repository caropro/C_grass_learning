#include <iostream>

using namespace std;

int main_51()
{
	int a = 112;
	//����ָ��p
	int * p;
	//ָ��pָ�����a
	p = &a;

	//32λϵͳ�£�ָ��ռ��4���ֽڣ�64λռ��8���ֽڡ�
	cout <<"ָ��p�Ĵ�С��"<<sizeof(p)<<endl;

	cout <<"char ���͵�ָ���С��"<<sizeof(char* )<<endl;

	cout <<"float ���͵�ָ���С��"<<sizeof(float*)<<endl;

	cout <<"double ���͵�ָ���С��"<<sizeof(double*)<<endl;

	system("pause");
	return 0;
}


