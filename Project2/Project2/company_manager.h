#pragma once
//����֮���ļ�����Ҫ�õ�ͷ�ļ�
#include <iostream>
#include <fstream>
using namespace std;
#include "worker.h"
#include <fstream>
#define FILENAME "empFile.txt"

class manage_system
{
public:
	//----------��������-------------
	//�����չ��캯��
	manage_system();
	//��������������
	~manage_system();
	//�����˵���ʾ����
	void show_menu();
	//�˳�ϵͳ
	void quit_sys();
	//���ְ��
	void Add_Emp();
	//д���ļ�
	void save();
	//ͳ������
	int get_EmpNum();
	//��ʼ��Ա�������ļ���ȡ��Ϣ������Ա����Ϣ����
	void init_Emp();

	//----------���Բ���-------------
	//��¼ְ������
	int m_EmpNum;
	//ְ������ָ��
	worker** m_EmpArray;
	//����ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;

};