#include <iostream>
using namespace std;

int main_24()
{
	int a;
	int b;
	int c;
	int max;
	int min;
	//���������ж�ֵ
	cout << "�����ж�ֵA��" << endl;
	cin >> a;
	cout << "�����ж�ֵB��" << endl;
	cin >> b;
	cout << "�����ж�ֵC��" << endl;
	cin >> c;

	//abc֮�����ֵ
	max = a > b ? a : b;
	max = max > c ? max : c;
	cout << "max value��" << max << endl;

	//ͬ������������Ϊ�����ж�
	min = 0;
	(a > b ? a : b) = min;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}