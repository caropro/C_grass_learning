#pragma once
//避免重复调用
#include <iostream>
using namespace std;

//点：有点坐标
class point
{
public:
	//含有点坐标设置的方法
	void set_px(float x_pos);
	void set_py(float y_pos);
	float get_px();
	float get_py();
private:
	float p_x;
	float p_y;
};
//只声明不定义