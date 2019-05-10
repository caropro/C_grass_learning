#include <iostream>
using namespace std;

//声明一个类

class Person_construct
{
//在内部创建构造函数，做初始化调用，只在声明对象的时候调用一次
public:
	//构造函数可以含有参数，但名字需要与类一样
	Person_construct()
	{
		cout << "进行初始化操作" << endl;
	}
//创建一个析构函数，在程序结束时调用一次
	~Person_construct()
	{
		cout << "进行析构操作" << endl;
	}
};

void test_print()
{
	cout << "fuck c++" << endl;
	Person_construct p;
}

int main_11()
{
	test_print();
	system("pause");
	return 0;
}
