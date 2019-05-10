#include "point.h"

class Circle
{
public:
	//含有圆心与半径设置的方法

	void set_cr(float r_value);
	void set_cc(point c);
	//含有圆心与半径获取的方法
	float get_cr();
	point get_cc();
private:
	//圆心位置坐标
	point cc;
	//半径大小
	float C_r;
};