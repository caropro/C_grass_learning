#include <iostream>
using namespace std;

int main_43()
{
	int arr_1[][3] = { 1,2,3,4,5,6,7,8,9 };

	cout << "�ڴ��׵�ַ��" << arr_1 << "\nʮ�����׵�ַ��" << (int)& arr_1 << endl;
	cout << "��һ���ڴ��׵�ַ��" << arr_1[0] << "\nʮ�����׵�ַ��" << (int)& arr_1[0] << endl;
	cout << "�ڶ����ڴ��׵�ַ��" << arr_1[1] << "\nʮ�����׵�ַ��" << (int)& arr_1[1] << endl;

	//���ڴ�ռ�ÿռ��С
	cout << "��ά�����С��" << sizeof(arr_1)<<endl;
	cout << "��ά�����С��" << sizeof(arr_1[0])<<endl;
	cout << "��ά�����С��" << sizeof(arr_1[0][0])<<endl;

	//�����и���
	cout << "��ά����������ʽ1��" << _countof(arr_1) << endl;
	cout << "��ά����������ʽ2��" << sizeof(arr_1) / sizeof(arr_1[0]) << endl;

	cout << "��ά����������ʽ1��" << _countof(arr_1[0]) << endl;
	cout << "��ά����������ʽ2��" << sizeof(arr_1[0]) / sizeof(arr_1[0][0]) << endl;
	system("pause");
	return 0;
}