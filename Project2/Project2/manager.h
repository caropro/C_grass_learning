#pragma once

#include <iostream>
using namespace std;
#include "worker.h"

//������

class Manager :public worker
{
public:
	//�ض��庬�ι��캯��
	Manager(int id, string name, int dep_id);
	//�ض���̳еĴ��麯��
	virtual void show_info();
	//�ض����ȡ��λ����
	virtual string getDepName();
};