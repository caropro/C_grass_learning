#include "boss.h"

Boss::Boss(int id, string name, int dep_id)
{
	this->w_id = id;
	this->w_name = name;
	this->w_dep = dep_id;
}


void Boss::show_info()
{
	cout << "职工编号：" << this->w_id << "\t职工姓名：" << this->w_name << "\t岗位：" << this->getDepName()
		<< "\t岗位职责：管理公司所有事物" << endl;
}

string Boss::getDepName()
{
	return string("总裁");
}


