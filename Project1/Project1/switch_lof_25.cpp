#include <iostream>
using namespace std;

int main_25()
{
	//switch���
	//��Ӱ����ϵͳ
	//9+ ��Ƭ
	//8+ ����
	//6+ �ϸ�
	//6- ��Ƭ

	//��ʾ�û���������
	int score;
	int level;
	cout << "�������Ӱ���֣�" << endl;
	cin >> score;
	//�����û����ַ�Χ
	if (score>=9)
	{
		level = 1;
	}
	else if (score >= 8)
	{
		level = 2;
	}
	else if (score >= 6)
	{
		level = 3;
	}
	else
	{
		level = 4;
	}
	//�����û�����
	cout << "�������ķ���Ϊ��" << score << endl;
	//�����û����ֶ�Ӧ����
	switch (level)
	{
		case 1:
			cout << "����ӰƬ������Ϊ����Ƭ" << endl;
			break;
		case 2:
			cout << "����ӰƬ������Ϊ������" << endl;
			break;
		case 3:
			cout << "����ӰƬ������Ϊ���ϸ�" << endl;
			break;
		default:
			cout << "����ӰƬ������Ϊ����Ƭ" << endl;
			break;
	}
	system("pause");
	return 0;
}