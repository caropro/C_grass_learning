#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

//Ա����
class employee : public worker
{
public:
	//Ա�����캯��
	employee(int id, string name, int dep_id);
	//��ʾ������Ϣ
	virtual void show_info();
	//��ȡ��λ����
	virtual string getDepName();
};