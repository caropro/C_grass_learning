#include "point.h"
#include "circle.h"


//����Բ����뾶���õķ���
void Circle::set_cr(float r_value)
{
	C_r = r_value;
}
void Circle::set_cc(point c)
{
	cc = c;
}
//����Բ����뾶��ȡ�ķ���
float Circle::get_cr()
{
	return C_r;
}
point Circle::get_cc()
{
	return cc;
}