#include <iostream>

using namespace std;

struct student
{
	string name;
	int id;
	int age;
	int score;
};

//使用地址传递，在遇到大数据时可以节省资源，直接指向
//但需要进行修饰来保证数据安全
void printS(const student * s1)
{
	//s1->age=100 类似不需要的数值修改操作就可以被规避掉
	cout << "函数中打印数据" << endl;
	cout << "Name:" << s1->name << "\nAge:" << s1->age << "\nID:" << s1->id << "\nScore:" << s1->score << endl;
}

int main_62()
{
	student s1 = { "小赵",3,15,88 };
	printS(&s1);

	cout << "处理过后的学生年龄：" << s1.age << endl;

	system("pause");
	return 0;
}