#include <iostream>
using namespace std;

int main_22()
{
	//if Ƕ�����
	int score;
	cout << "�����жϷ�����" << endl;
	cin >> score;
	//����if�ж�
	if (score >= 60)
	{
		if (score == 100)
		{
			cout << "���ĵ÷֣�" << score << "---�����֣���" << endl;
		}
		else if (score > 90)
		{
			cout << "���ĵ÷֣�" << score << "---������" << endl;
		}
		else if (score > 75)
		{
			cout << "���ĵ÷֣�" << score << "---������" << endl;
		}
		else
		{
			cout << "���ĵ÷֣�" << score << "---���ϸ�" << endl;
		}
	}
	else
	{
		cout << "δ�ܼ���" << endl;
	}
	system("pause");
	return 0;
}
