#include <iostream>
using namespace std;

int main_33()
{
	//1-9�ĳ˷��ھ�ѭ��
	for (int i = 1; i < 10; i++)
	{
		//�ڲ�ѭ����ִ�����ݰ�����ǰֵ��������do-while
		int j = 1;
		do
		{
			printf("|%d x %d = %d|",j,i,j*i);
			j++;
		} while (j <= i);
		cout << endl;
	}

	system("pause");
	return 0;
}