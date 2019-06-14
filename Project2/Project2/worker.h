#pragma once
#include <iostream>
using namespace std;
#include <string>


class worker
{
public:
	//显示个人信息，纯虚函数
	virtual void show_info() = 0;
	//获取岗位名称
	virtual string getDepName() = 0;

	//职工编号
	int w_id;
	//职工姓名
	string w_name;
	//部门编号
	int w_dep;
};