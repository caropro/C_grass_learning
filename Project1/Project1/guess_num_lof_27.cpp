#include <iostream>
using namespace std;
//Ϊ��ʹ��time��Ҫ����ͷ�ļ�
#include <ctime>

int main()
{
	//������
	//����һ����Χ�ڵ��������
	//rand��α�������ÿ����ʼֵ���ǹ̶���
	//��Ҫ�����������ӣ�����ϵͳʱ������
	srand((unsigned int)time(NULL));

	int result = rand() % 50;
	cout << result << endl;
	//����ѭ��
	int input_num;

	while (true)
	{
		//���û���������
		cout << "������²�����֣�" << endl;
		cin >> input_num;
		//�ȴ�С
		if (input_num==result)
		{
			cout << "��ϲ����" << endl;
			break;
		}
		else if (input_num > result)
		{
			cout << "�²����ֵ����" << endl;
		}
		else
		{
			cout << "�²����ֵС��" << endl;
		}

	}
	cout << "��Ϸ����" << endl;
	system("pause");
	return 0;
}