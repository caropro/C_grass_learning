#include <iostream>
using namespace std;

int main_40()
{
	//���������������
	int arr[] = { 1,5,8,3,2,4,6,7 };
	//����һ��ͬ��λ���Ŀ�����
	int new_arry[_countof(arr)];
	int tmp = 0;
	for (int i = 0; i < _countof(arr); i++)
	{
		//��ʱ�洢��ֵ
		tmp = arr[i];
		//����ѭ���ȶԴ�С
		for (int j = 0; j < _countof(new_arry); j++)
		{
			if (tmp > new_arry[j])
			{
				for (int k=(_countof(new_arry)-1);k>j;k--)
				{
					new_arry[k] = new_arry[k - 1];
				}
				new_arry[j] = tmp;
				break;
			}
		}
	}
	// "�Ӵ�С������" 
	for (int key = 0; key < _countof(new_arry); key++)
	{
		cout << "�����ֵ"<<key<<"��"<< new_arry[key] << endl;
	}
	
	//����һ�����������
	int reverse[_countof(arr)];
	for (int i = 0; i < _countof(arr); i++)
	{
		reverse[_countof(arr) -1- i] = arr[i];
	}
	// "��������" 
	for (int key2 = 0; key2 < _countof(reverse); key2++)
	{
		cout << "���������ֵ" << key2 << "��" << reverse[key2] << endl;
	}
	system("pause");
	return 0;
}