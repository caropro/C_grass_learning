#include <iostream>
using namespace std;

int main_54()
{
	int arry[] = { 1,2,3,4,5 };

	int * p = arry;//arry ����������ڴ��׵�ַ

	for (int i = 0; i < _countof(arry); i++)
	{
		cout << "�����е�ֵΪ��" << *p << endl;
		p++;//ָ�����
	}


	system("pause");
	return 0;
}