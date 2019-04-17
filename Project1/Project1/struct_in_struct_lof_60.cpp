#include <iostream>
using namespace std;
//定义学生结构体
struct student
{
	string name;
	int id;
	int score;
};
//定义教师结构体，内部包含学生结构体数据
struct teacher
{
	int id;
	int age;
	string name;
	student st;
};

int main_60()
{
	//嵌套访问进行赋值
	teacher t1;
	t1.age = 33;
	t1.id = 24;
	t1.name = "老刘";
	t1.st.name = "小郑";
	t1.st.id = 44;
	t1.st.score = 87;
	//嵌套访问进行查询
	cout << "教师姓名：" << t1.name << endl << "教师年龄：" << t1.age << endl
		<< "教师编号：" << t1.id << endl << "学生姓名：" << t1.st.name << endl
		<< "学生编号：" << t1.st.id << endl << "学生成绩：" << t1.st.score << endl;

	system("pause");
	return 0;
}
