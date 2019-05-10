#include <iostream>
using namespace std;

class c_12
{
public:

	c_12()
	{
		cout << "无参数构造" << endl;
	}

	c_12(int code_num)
	{
		code = code_num;
		cout << "有参数构造" << endl;
	}
	//拷贝构造调用可以使用现成的同类型对象的参数数据来初始化当前对象
	c_12(const c_12 &c)
	{
		code = c.code;
		cout << "拷贝构造" << endl;
	}


	~c_12()
	{
		cout << "析构函数调用" << endl;
	}
	int code;
};

void test_12()
{
	//1.括号调用方法
	//c_12 c1;
	//c_12 c2(12);
	//c_12 c3(c2);
	//2.显示调用方法
	c_12 c1;
	c_12 c2 = c_12(12);
	c_12 c3 = c_12(c2);//右侧这种声明出来没有变量名称的函数，是匿名函数

	c_12(44);//匿名对象创建之后，会被立即回收
	//3.隐式转换法
	c_12 p4 = 12;//等于c_12 p4(12)
	c_12 p5 = p4;//等于c_12 p5(p4)拷贝构造

	cout << "end test 12" << endl;
}

int main_12()
{
	test_12();
	system("pause");
	return 0;
}