#include "point.h"

//表明这个是point函数下的
void point::set_px(float x_pos)
{
	p_x = x_pos;
}
void point::set_py(float y_pos)
{
	p_y = y_pos;
}
float point::get_px()
{
	return p_x;
}
float point::get_py()
{
	return p_y;
}
