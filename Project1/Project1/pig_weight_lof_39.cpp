#include <iostream>
using namespace std;

int main_39()
{
	//�������飬�ҳ�������
	int pig_arr[] = { 200,300,350,250,400 };
	//�������ֵ����ѭ���н����ж��滻
	int max_weight = 0;
	for (int i = 0; i < _countof(pig_arr); i++)
	{
		if (max_weight < pig_arr[i])
		{
			max_weight = pig_arr[i];
		}
	}
	cout << "���ص�С��Ϊ��" << max_weight << endl;

	system("pause");
	return 0;
}