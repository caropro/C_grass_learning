#include <iostream>
using namespace std;

int main_42()
{
	//������ά����ļ��ַ�ʽ
	//1.�������� ������[����][����];
	int arr_1[2][3];
	arr_1[0][0]=1;
	arr_1[0][1]=2;
	arr_1[0][2]=3;
	arr_1[1][0]=4;
	arr_1[1][1]=5;
	arr_1[1][2]=6;
	
	//��ͨ�����ʾ
	cout << arr_1[0][0] <<"|"<< arr_1[0][1] << "|" << arr_1[0][2] << endl;
	cout << arr_1[1][0] << "|" << arr_1[1][1] << "|" << arr_1[1][2] << endl;

	//Ƕ�������ʾ
	//�ײ����
	cout << _countof(arr_1) << endl;//���������ײ�Ƕ�׸���
	for (int level_1 = 0; level_1 < _countof(arr_1); level_1++)
	{
		cout << "|";
		for (int level_2 = 0; level_2 < _countof(arr_1[level_1]); level_2++)//ÿ�е���������μ�Ƕ�׵ĸ���
		{
			cout << arr_1[level_1][level_2] << "|" ;
		}
		cout << endl;
	}

	cout << endl;
	//2.�������� ������[����][����] = {{����1,����2},{����3,����4}};
	int arr_2[2][3] = 
	{ 
		{1,2,3},
		{4,5,6} 
	};
	for (int level_1 = 0; level_1 < _countof(arr_2); level_1++)
	{
		cout << "|";
		for (int level_2 = 0; level_2 < _countof(arr_2[level_1]); level_2++)//ÿ�е���������μ�Ƕ�׵ĸ���
		{
			cout << arr_2[level_1][level_2] << "|";
		}
		cout << endl;
	}
	cout << endl;
	//3.�������� ������[����][����] = {����1,����2,����3,����4};
	int arr_3[2][3] = { 1,2,3,4,5,6 };
	for (int level_1 = 0; level_1 < _countof(arr_3); level_1++)
	{
		cout << "|";
		for (int level_2 = 0; level_2 < _countof(arr_3[level_1]); level_2++)//ÿ�е���������μ�Ƕ�׵ĸ���
		{
			cout << arr_3[level_1][level_2] << "|";
		}
		cout << endl;
	}
	cout << endl;
	//4.�������� ������[][����] = {����1,����2,����3,����4};
	int arr_4[][3] = { 1,2,3,4,5,6,7,8,9};
	for (int level_1 = 0; level_1 < _countof(arr_4); level_1++)
	{
		cout << "|";
		for (int level_2 = 0; level_2 < _countof(arr_4[level_1]); level_2++)//ÿ�е���������μ�Ƕ�׵ĸ���
		{
			cout << arr_4[level_1][level_2] << "|";
		}
		cout << endl;
	}
	cout << endl;

	system("pause");
	return 0;
}