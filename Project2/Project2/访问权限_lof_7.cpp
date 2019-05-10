#include <iostream>
using namespace std;

/*
三种权限
public权限：公共权限，成员 类内可以访问 类外可以访问
protected权限：保护权限，成员 类内可以访问 类外不可以访问 子类可继承此内容
private权限：私有权限，成员 类内可以访问 类外不可以访问 子类不可继承此内容
*/

class Person
{
public:
	//公共权限的属性，类的内外都可以访问
	string name;
	int age;
	//私有属性，只有内部可以访问
private:
	int password;
	//受保护属性，只有内部可以访问
protected:
	int salary;
public:
	void print_info()
	{
		//在类的函数内部可以进行赋值操作，在外部操作的话相当于重新定义权限
		password = 1111111;
		salary = 22222;
		cout <<"姓名："<< name << endl;
		cout << "年龄：" << age << endl;
		cout << "密码：" << password << endl;
		cout <<"薪水："<< salary << endl;
	};
};


int main_7()
{
	Person p1;
	p1.name = "李四";
	p1.age = 48;
	p1.print_info();
	system("pause");
	return 0;
}
