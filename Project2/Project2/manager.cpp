#include "manager.h"

Manager::Manager(int id, string name, int dep_id)
{
	this->w_id = id;
	this->w_name = name;
	this->w_dep = dep_id;
}


void Manager::show_info()
{
	cout << "ְ����ţ�" << this->w_id << "\tְ��������" << this->w_name << "\t��λ��" << this->getDepName()
		<< "\t��λְ������ϰ彻�������񣬲��·������Ա��" << endl;
}

string Manager::getDepName()
{
	return string("����");
}


