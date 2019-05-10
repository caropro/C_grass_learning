#include <iostream>
using namespace std;
#include "point.h"
#include "circle.h"
/*
//Բ���ͣ�����Բ��λ�ã��뾶
class Circle
{
public:
	//����Բ����뾶���õķ���
	void set_cx(float x_pos)
	{
		C_centerX = x_pos;
	}
	void set_cy(float y_pos)
	{
		C_centerY = y_pos;
	}
	void set_cr(float r_value)
	{
		C_r = r_value;
	}
	void set_cc(point c)
	{
		cc = c;
	}
	//����Բ����뾶��ȡ�ķ���
	float get_cx()
	{
		return C_centerX;
	}
	float get_cy()
	{
		return C_centerY;
	}
	float get_cr()
	{
		return C_r;
	}
	point get_cc()
	{
		return cc;
	}
private:
	//Բ��λ������
	float C_centerX;
	float C_centerY;
	//���߷�point������ΪԲ������
	point cc;
	//�뾶��С
	float C_r;
};

//�㣺�е�����
class point 
{
public:
	//���е��������õķ���
	void set_px(float x_pos)
	{
		p_x = x_pos;
	}
	void set_py(float y_pos)
	{
		p_y = y_pos;
	}
	float get_px()
	{
		return p_x;
	}
	float get_py()
	{
		return p_y;
	}
private:
	//��λ������
	float p_x;
	float p_y;
};
*/

//�жϺ���
void compare_pos(Circle &C1 ,point p1)
{
	float distance = sqrtf(pow((C1.get_cc().get_px() - p1.get_px()), 2) + pow((C1.get_cc().get_py() - p1.get_py()), 2));
	//ͨ���㵽Բ�ĵľ����жϵ������Բ��λ��	
	if (distance == C1.get_cr())
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > C1.get_cr())
	{
		cout << "����Բ��" << endl;
	}
	else 
	{
		cout << "����Բ��" << endl;
	}
}

int main_10()
{
	Circle c1;
	point c_center;
	c_center.set_px(14);
	c_center.set_py(4);
	c1.set_cc(c_center);
	c1.set_cr (14);

	point p1;
	p1.set_px(3);
	p1.set_py(7);

	compare_pos(c1, p1);

	system("pause");
	return 0;
}