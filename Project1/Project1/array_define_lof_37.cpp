#include <iostream>
using namespace std;

int main_37()
{
	//�������ֶ�����ʽ
	//1.�������� ������[���鳤��];
	int arrays_1[4];

	arrays_1[0] = 5;
	arrays_1[1] = 4;
	arrays_1[2] = 3;
	arrays_1[3] = 2;

	cout <<"����1�ĳ���Ϊ��"<<_countof(arrays_1) << endl;
	for (int i = 0; i < _countof(arrays_1); i++)
	{
		printf("����1�ĵ�%d��λ�õ�ֵΪ��%d\n", i,arrays_1[i]);
	}
	//2.�������� ������[���鳤��]={ֵ1��ֵ2, ��};
	int arrays_2[4] = { 1,2,3,4 };

	cout << "����2�ĳ���Ϊ��" << _countof(arrays_2) << endl;
	for (int i = 0; i < _countof(arrays_2); i++)
	{
		printf("����2�ĵ�%d��λ�õ�ֵΪ��%d\n", i, arrays_2[i]);
	}
	//3.�������� ������[]={ֵ1,ֵ2,ֵ3��};
	int arrays_3[] = { 1,2,3,4,5,6 };
	
	cout << "����3�ĳ���Ϊ��" << _countof(arrays_3) << endl;
	for (int i = 0; i < _countof(arrays_3); i++)
	{
		printf("����3�ĵ�%d��λ�õ�ֵΪ��%d\n", i, arrays_3[i]);
	}

	system("pause");
	return 0;
}