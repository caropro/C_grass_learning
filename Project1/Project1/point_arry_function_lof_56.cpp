#include <iostream>
using namespace std;

//����Ҫ����ֵ�ĺ���������ð������
void sortbyvalue(int * arr,int len)
{
	//�ײ�n-1�δ�ѭ��
	for (int i = 0; i < (len - 1); i++)
	{
		//�β�n-i-1�εıȶԣ����й����δ�ѭ���Ϳ������Ҽ���
		for (int j = 0; j < (len - 1 - i); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			
		}
	}
}

int main_56()
{
	//����һ�����飬׼��ͨ���������������е�ֵ��С��������
	int basic_arry[] = { 4,5,6,3,2,1,7,8,9,10 };
	//������������
	sortbyvalue(basic_arry, _countof(basic_arry));
	//��ӡ��������е�ֵ
	for (int i = 0; i < _countof(basic_arry); i++)
	{
		cout << "�����е�ֵΪ��" << basic_arry[i] << endl;
	}

	system("pause");
	return 0;
}