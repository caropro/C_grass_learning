#include "point.h"

class Circle
{
public:
	//����Բ����뾶���õķ���

	void set_cr(float r_value);
	void set_cc(point c);
	//����Բ����뾶��ȡ�ķ���
	float get_cr();
	point get_cc();
private:
	//Բ��λ������
	point cc;
	//�뾶��С
	float C_r;
};