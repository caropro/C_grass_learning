#include <iostream>
using namespace std;

int main_41()
{
	//ð�����У���С�����������
	int arr[] = { 9,3,2,5,4,1,6,7,8 };
	int tmp;
	//��Ҫ��n-1�ε���ת�Ϳ����������
	for (int i = 0; i < _countof(arr) - 1; i++)
	{
		//���׻غ���ת��ʼ��ÿ�ν��м�1�ε�����
		for (int k = 0;k< _countof(arr) - i-1; k++)
		{
			//����9�����֣��׻غ���8�αȶ��ҳ����ֵ
			//�ڶ��غ���7���ҳ��ڶ���ģ��Դ����ơ�
			if (arr[k] > arr[k + 1])
			{
				tmp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = tmp;
			}

		}
	}
	for (int key = 0; key < _countof(arr); key++)
	{
		cout << "ð�������" << arr[key]<<endl;
	}
	system("pause");
	return 0;
}