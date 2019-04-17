#include <iostream>
using namespace std;

struct student
{
	string name;
	int age;
	int index;
};

int main_59()
{
	//创建结构体类型的变量
	student a;
	a.name = "Tom";
	a.age = 19;
	a.index = 14;
	//声明对应结构体类型的指针，指向结构体变量
	student* p1 = &a;
	//"->"通过指向符号来获取结构体指针所指向的数据
	cout << "指针输出数据：\n" << "姓名：" << p1->name << "\n年龄：" << p1->age << "\n学号：" << p1->index << endl;

	system("pause");
	return 0;
}