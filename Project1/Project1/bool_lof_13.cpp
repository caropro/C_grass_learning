#include <iostream>
using namespace std;

int main_13()
{
	//����bool�ͱ�������ֵΪtrue���������ڴ�ռ�����
	bool flag = true;

	cout << "flag �Ĵ�ӡֵΪ��" << flag << "\n" << "flag �Ŀռ�ռ��Ϊ��" << sizeof(flag) << endl;
	//����bool�ͱ�������ֵΪfalse���������ڴ�ռ�����
	bool flag_2 = false;

	cout << "flag_2 �Ĵ�ӡֵΪ��" << flag_2 << "\n" << "flag_2 �Ŀռ�ռ��Ϊ��" << sizeof(flag_2) << endl;

	//����ֵ�У�0Ϊ�٣�1Ϊ��
	system("pause");
	return 0;
}
