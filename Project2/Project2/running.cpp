#include "company_manager.h"





int main_xx()
{
	manage_system ms;
	int choice = 0;
	while(true)
	{
		ms.show_menu();

		cout << "��ѡ����Ҫ�Ĳ�����" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0://�˳�ϵͳ
			ms.quit_sys();
		case 1://���Ա��
			break;
		case 2://��ʾԱ����Ϣ
			break;
		case 3://ɾ����ְԱ��
			break;
		case 4://�޸�Ա����Ϣ
			break;
		case 5://����Ա����Ϣ
			break;
		case 6://���������
			break;
		case 7://���������Ϣ
			break;
		default:
			system("cls");
			break;
		}

	}
	system("pause");
	return 0;
}