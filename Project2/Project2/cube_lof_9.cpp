#include <iostream>
using namespace std;

//声明立方体类型
class Cube 
{
	//含有长、宽、高三个私有属性，且可查看与修改
private:
	float cube_width;
	float cube_length;
	float cube_height;
public:
	//获取并显示长、宽、高
	float get_width()
	{
		cout << "当前立方体的宽度：" << cube_width << endl;
		return cube_width;
	}
	float get_height()
	{
		cout << "当前立方体的高度：" << cube_height << endl;
		return cube_height;
	}
	float get_length()
	{
		cout << "当前立方体的长度：" << cube_length << endl;
		return cube_length;
	}
	//设置，修改长、宽、高
	void set_width(float value)
	{
		cube_width= value;
	}
	void set_height(float value)
	{
		cube_height= value;
	}
	void set_length(float value)
	{
		cube_length= value;
	}
	//可以返回立方体的面积与体积信息
	float calculate_s()
	{
		return (cube_height * cube_length + cube_width * cube_height + cube_width * cube_length) * 2;
	}
	float calculate_v()
	{
		return cube_height * cube_length * cube_width;
	}

	//可以与另一个立方体进行比对，判断是否相等
	bool compare_with(Cube& cube)
	{
		if (cube.cube_height == cube_height && cube_length == cube.cube_length && cube.cube_width == cube_width)
		{
			cout << "两个立方体一致" << endl;
			return true;
		}
		else
		{
			cout << "两个立方体不一致" << endl;
			return false;
		}
	}
};

bool compare_with(Cube &cube1 , Cube &cube2)
{
	if (cube1.get_height() == cube2.get_height() and cube1.get_length() == cube2.get_length() and cube1.get_width() == cube2.get_width())
	{
		cout << "两个立方体一致" << endl;
		return true;
	}
	else
	{
		cout << "两个立方体不一致" << endl;
		return false;
	}
}



int main_9()
{
	Cube cube1;
	cube1.set_height(100);
	cube1.set_length( 23);
	cube1.set_width(44);

	cout << "cube1的面积为：" << cube1.calculate_s() << endl;
	cout << "cube1的体积为：" << cube1.calculate_v() << endl;

	Cube cube2;
	cube2.set_height(100);
	cube2.set_length(23);
	cube2.set_width(44);

	cout << "cube2的面积为：" << cube2.calculate_s() << endl;
	cout << "cube2的体积为：" << cube2.calculate_v() << endl;

//使用全局函数进行判断
	bool result = compare_with(cube1, cube2);
//使用cube类中的成员函数进行判断
	cube1.compare_with(cube2);

	system("pause");
	return 0;
}