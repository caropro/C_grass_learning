#include "boss.h"

Boss::Boss(int id, string name, int dep_id)
{
	this->w_id = id;
	this->w_name = name;
	this->w_dep = dep_id;
}


void Boss::show_info()
{
	cout << "ְ����ţ�" << this->w_id << "\tְ��������" << this->w_name << "\t��λ��" << this->getDepName()
		<< "\t��λְ�𣺹���˾��������" << endl;
}

string Boss::getDepName()
{
	return string("�ܲ�");
}


