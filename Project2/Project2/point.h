#pragma once
//�����ظ�����
#include <iostream>
using namespace std;

//�㣺�е�����
class point
{
public:
	//���е��������õķ���
	void set_px(float x_pos);
	void set_py(float y_pos);
	float get_px();
	float get_py();
private:
	float p_x;
	float p_y;
};
//ֻ����������