#include <iostream>
using namespace std;
//声明π的数值
const double PI = 3.14;

//声明，定义圆形的类，要有能返回周长的功能
class Circle
{
	//公共权限
public:
	//声明半径属性
	int r;
	//含有一个返回周长的函数
	double calculate_pm()
	{
		return 2 * r * PI;
	}

};

class Student
{
public:
	//声明学生姓名属性
	string name;
	void set_name(string input_name)
	{
		name = input_name;
	}
	
	//声明学生学号属性
	int id_num;
	void set_id(int id)
	{
		id_num = id;
	}
	
	//声明显示学生以上两个信息的函数
	void show_student_info()
	{
		cout << "学生姓名为：" << name << endl;
		cout << "学生学号为："<<id_num<<endl;
	}
};

int main_6()
{
	//实例化c1
	Circle c1;
	//为c1的半径赋值
	c1.r = 5;
	//使用类中函数返回周长值
	cout << "周长数值为：" << c1.calculate_pm() << endl;


	Student s1;
	//两种设置方式
	s1.set_name("王二狗");
	s1.id_num = 77;

	s1.show_student_info();

	system("pause");
	return 0;
}
