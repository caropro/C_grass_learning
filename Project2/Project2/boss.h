#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

//老板类
class Boss : public worker
{
public:
	//重定义含参构造函数
	Boss(int id, string name, int dep_id);
	//显示个人信息
	virtual void show_info();
	//获取岗位名称
	virtual string getDepName();

};

