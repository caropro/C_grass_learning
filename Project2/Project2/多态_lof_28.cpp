#include <iostream>
using namespace std;

class Animal
{
public:
	//父类中使用虚函数
	virtual void speak()
	{
		cout << "Animal Speaking"<<endl;
	}
};
class Wolf :public Animal
{
public:
	//需要重写父类中的虚函数
	void speak()
	{
		cout << "Wolf Wolf" << endl;
	}
};

void toSpeak(Animal& ani)
{
	//调用函数，可调用animal类，包括子类中的speak
	ani.speak();
}

//测试函数，实例化之后，运行调用函数
void test_28()
{
	Wolf wf;
	//父类的指针，指向子类对象
	toSpeak(wf);
	//实现同一个调用方法，运行不同类（子类父类）的同种函数
	Animal ani;
	toSpeak(ani);
}


int main_28()
{
	test_28();
	system("pause");
	return 0;
}



