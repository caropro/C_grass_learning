#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

//�ϰ���
class Boss : public worker
{
public:
	//�ض��庬�ι��캯��
	Boss(int id, string name, int dep_id);
	//��ʾ������Ϣ
	virtual void show_info();
	//��ȡ��λ����
	virtual string getDepName();

};

