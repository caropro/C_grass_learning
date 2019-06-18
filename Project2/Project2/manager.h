#pragma once

#include <iostream>
using namespace std;
#include "worker.h"

//经理类

class Manager :public worker
{
public:
	//重定义含参构造函数
	Manager(int id, string name, int dep_id);
	//重定义继承的纯虚函数
	virtual void show_info();
	//重定义获取岗位名称
	virtual string getDepName();
};