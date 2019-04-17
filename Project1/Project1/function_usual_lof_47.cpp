#include <iostream>
using namespace std;
#include <ctime>
//函数常见样式
//1.无参数无返回值
void print_test()
{
	cout << "print test" << endl;
}
//2.有参数无返回值
void print_test_value(int value)
{
	cout<<"value is："<<value<<endl;
}
//3.无参数有返回值
int return_value()
{
	srand((unsigned int)time(NULL));
	return rand() % 100;
}
//4.有参数有返回值
int test4(int org)
{
	cout << "+1" << endl;
	return (org + 1);
}

int main_47()
{
	//测试无参数，无返回值的函数
	print_test();
	//测试有参数，无返回值的函数
	int num_1 = 19945;
	print_test_value(num_1);
	//测试无参数，有返回值的函数
	int num_2 = return_value();
	cout << "value of num2 is：" << num_2 << endl;
	//测试有参数，有返回值的函数
	int num_3 = 10;
	cout << test4(num_3) << endl;

	system("pause");
	return 0;
}