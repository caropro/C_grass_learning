#include <iostream>
using namespace std;

class Person
{
public:
	//设置公共的访问方法，来修改私有属性的值
	void set_Name(string name_input)
	{
		name = name_input;
	}
	//设置公共的访问方法，来获取私有属性的值
	string get_Name()
	{
		return name;
	}
//三个私有属性
private:
	string name;
	int age;
	int value;
};



int main_8()
{
	Person p1;
	p1.set_Name("王钢蛋");
	cout << "输出姓名：" << p1.get_Name() << endl;
	system("pause");
	return 0;
}