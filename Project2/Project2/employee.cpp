#include "employee.h"

//���庬�ι��캯��
employee::employee(int id, string name, int dep_id)
{
	this->w_id = id;
	this->w_name = name;
	this->w_dep = dep_id;
}

//������ʾԱ����Ϣ����
void employee::show_info()
{
	cout << "ְ����ţ�" << this->w_id << "\tְ��������" << this->w_name << "\t��λ��" << this->getDepName()
		<< "\t��λְ������ϼ�����������" << endl;
}

//�����ȡ��������
string employee::getDepName()
{
	return string("Ա��");
}
