#include "company_manager.h"





int main_xx()
{
	manage_system ms;
	int choice = 0;
	while(true)
	{
		ms.show_menu();

		cout << "请选择需要的操作：" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0://退出系统
			ms.quit_sys();
		case 1://添加员工
			break;
		case 2://显示员工信息
			break;
		case 3://删除离职员工
			break;
		case 4://修改员工信息
			break;
		case 5://查找员工信息
			break;
		case 6://按编号排序
			break;
		case 7://清空所有信息
			break;
		default:
			system("cls");
			break;
		}

	}
	system("pause");
	return 0;
}