#include <iostream>
using namespace std;

int main_52()
{
	//��ָ�룬ָ����Ϊ0�Ŀռ�
	int* p = NULL;
	//������һ����������ַ��ʲô���
	int* p2 = NULL;

	//NULL���͵�ָ�벻�ܷ��ʣ����磺*p=10

	//0~255�ı�ſռ�Ϊϵͳռ���ڴ棬�޷�����
	cout << "p�ĵ�ַ��" << p << endl;
	//��ӡ֮���ֶ���ָ����0
	cout << "p2�ĵ�ַ��" << p2 << endl;

	//����ֱ��ָ����Ȩ���ڴ��ַ��ָ�����Ұָ��
	//������Ӧ����������������
	int* p3 = (int*)0x1100;

	//cout<<*p4<<endl;
	system("pause");
	return 0;
}