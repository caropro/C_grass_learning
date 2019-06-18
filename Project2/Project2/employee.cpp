#include "employee.h"

//定义含参构造函数
employee::employee(int id, string name, int dep_id)
{
	this->w_id = id;
	this->w_name = name;
	this->w_dep = dep_id;
}

//定义显示员工信息函数
void employee::show_info()
{
	cout << "职工编号：" << this->w_id << "\t职工姓名：" << this->w_name << "\t岗位：" << this->getDepName()
		<< "\t岗位职责：完成上级交给的任务" << endl;
}

//定义获取部门名称
string employee::getDepName()
{
	return string("员工");
}
