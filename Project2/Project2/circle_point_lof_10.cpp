#include <iostream>
using namespace std;
#include "point.h"
#include "circle.h"
/*
//圆类型，包含圆心位置，半径
class Circle
{
public:
	//含有圆心与半径设置的方法
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
	//含有圆心与半径获取的方法
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
	//圆心位置坐标
	float C_centerX;
	float C_centerY;
	//或者放point类型作为圆心数据
	point cc;
	//半径大小
	float C_r;
};

//点：有点坐标
class point 
{
public:
	//含有点坐标设置的方法
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
	//点位置坐标
	float p_x;
	float p_y;
};
*/

//判断函数
void compare_pos(Circle &C1 ,point p1)
{
	float distance = sqrtf(pow((C1.get_cc().get_px() - p1.get_px()), 2) + pow((C1.get_cc().get_py() - p1.get_py()), 2));
	//通过点到圆心的距离判断点相对于圆的位置	
	if (distance == C1.get_cr())
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > C1.get_cr())
	{
		cout << "点在圆外" << endl;
	}
	else 
	{
		cout << "点在圆内" << endl;
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