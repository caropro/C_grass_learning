#include <iostream>
using namespace std;
//定义结构体
struct student
{
	string name;
	int age;
	int score;
};
//值传递的function
void printS1(student s1)
{
	s1.score += 15;
	cout << "传值方式处理" << endl;
	cout << "学生姓名：" << s1.name << "\n学生年龄：" << s1.age << "\n学生分数：" << s1.score << endl;
}
//地址传递的function
void printS2(student * s1)
{
	s1->score += 15;
	cout << "传地址方式处理" << endl;
	cout << "学生姓名：" << s1->name << "\n学生年龄：" << s1->age << "\n学生分数：" << s1->score << endl;
}

int main_61()
{
	student s1 = { "小刘",15,76 };

	//传值处理
	printS1(s1);

	cout << "处理后的数据" << endl;
	cout << "学生姓名：" << s1.name << "\n学生年龄：" << s1.age << "\n学生分数：" << s1.score << endl;

	//传地址处理
	printS2(&s1);

	cout << "处理后的数据" << endl;
	cout << "学生姓名：" << s1.name << "\n学生年龄：" << s1.age << "\n学生分数：" << s1.score << endl;

	system("pause");
	return 0;
}