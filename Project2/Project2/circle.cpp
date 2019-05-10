#include "point.h"
#include "circle.h"


//含有圆心与半径设置的方法
void Circle::set_cr(float r_value)
{
	C_r = r_value;
}
void Circle::set_cc(point c)
{
	cc = c;
}
//含有圆心与半径获取的方法
float Circle::get_cr()
{
	return C_r;
}
point Circle::get_cc()
{
	return cc;
}