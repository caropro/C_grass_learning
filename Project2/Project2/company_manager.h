#pragma once
//导入之后文件本体要用的头文件
#include <iostream>
#include <fstream>
using namespace std;

class manage_system
{
public:
	//创建空构造函数
	manage_system();
	//创建空析构函数
	~manage_system();
	//创建菜单显示函数
	void show_menu();
	//退出系统
	void quit_sys();

};