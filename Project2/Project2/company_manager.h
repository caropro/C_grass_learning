#pragma once
//导入之后文件本体要用的头文件
#include <iostream>
#include <fstream>
using namespace std;
#include "worker.h"
#include <fstream>
#define FILENAME "empFile.txt"

class manage_system
{
public:
	//----------函数部分-------------
	//创建空构造函数
	manage_system();
	//创建空析构函数
	~manage_system();
	//创建菜单显示函数
	void show_menu();
	//退出系统
	void quit_sys();
	//添加职工
	void Add_Emp();
	//写入文件
	void save();
	//统计人数
	int get_EmpNum();
	//初始化员工，从文件读取信息，创建员工信息数组
	void init_Emp();

	//----------属性部分-------------
	//记录职工人数
	int m_EmpNum;
	//职工数组指针
	worker** m_EmpArray;
	//标记文件是否为空
	bool m_FileIsEmpty;

};