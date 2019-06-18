#include "manager.h"

Manager::Manager(int id, string name, int dep_id)
{
	this->w_id = id;
	this->w_name = name;
	this->w_dep = dep_id;
}


void Manager::show_info()
{
	cout << "职工编号：" << this->w_id << "\t职工姓名：" << this->w_name << "\t岗位：" << this->getDepName()
		<< "\t岗位职责：完成老板交给的任务，并下发任务给员工" << endl;
}

string Manager::getDepName()
{
	return string("经理");
}


