#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

//员工类
class employee : public worker
{
public:
	//员工构造函数
	employee(int id, string name, int dep_id);
	//显示个人信息
	virtual void show_info();
	//获取岗位名称
	virtual string getDepName();
};