#include <iostream>
using namespace std;

int main_21()
{
	int score;
	//�������
	cout << "������Ҫ��ѯ�ķ�����" << endl;
	cin >> score;

	cout << "��ǰ����ķ���Ϊ��" << score << endl;

	//�����ж�
	if (score > 600)
	{
		cout << "����������" << endl;
	}
	//�����ж�
	else if (score == 600)
	{
		cout << "ѹ��" << endl;
	}
	//����ǰ���ж϶������ϵ�ʱ��
	else
	{
		cout << "δͨ������ѡ" << endl;
	}
	cout << "��ѯ����" << endl;
	system("pause");
	return 0;
}