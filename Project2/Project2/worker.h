#pragma once
#include <iostream>
using namespace std;
#include <string>


class worker
{
public:
	//��ʾ������Ϣ�����麯��
	virtual void show_info() = 0;
	//��ȡ��λ����
	virtual string getDepName() = 0;

	//ְ�����
	int w_id;
	//ְ������
	string w_name;
	//���ű��
	int w_dep;
};