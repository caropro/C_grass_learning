#include <iostream>
using namespace std;

//�������������ڴ˴�������
int max(int num1, int num2);

int main_48()
{
	int a = 10;
	int b = 19;

	//��������ڵ��ú󣬻�ʧ��
	//���Կ���������������֮���ٶ���
	cout << "���ֵ�ǣ�" << max(a, b) << endl;

	system("pause");
	return 0;
}
//����֮���庯��
int max(int num1, int num2)
{
	return num1 > num2 ? num1 : num2;
}