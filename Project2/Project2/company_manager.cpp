#include "company_manager.h"

manage_system::manage_system()
{
	cout << "重新定义的构造函数" << endl;
}

manage_system::~manage_system()
{
	cout << "重新定义的析构函数" << endl;
}

void manage_system::show_menu()
{
	cout << "重新定义的显示函数" << endl;
	cout << "**************************************" << endl;
	cout << "*********欢迎使用员工管理系统*********" << endl;
	cout << "*************0.退出系统***************" << endl;
	cout << "*************1.添加员工***************" << endl;
	cout << "*************2.显示员工信息***********" << endl;
	cout << "*************3.删除离职员工***********" << endl;
	cout << "*************4.修改员工信息***********" << endl;
	cout << "*************5.查找员工信息***********" << endl;
	cout << "*************6.按照编号排序***********" << endl;
	cout << "*************7.清空所有信息***********" << endl;
	cout << "**************************************" << endl;
}

void manage_system::quit_sys()
{
	cout << "欢迎下次继续使用" << endl;
	system("pause");
	exit(0);
}

