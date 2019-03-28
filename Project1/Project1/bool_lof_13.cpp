#include <iostream>
using namespace std;

int main_13()
{
	//创建bool型变量，赋值为true，并返回内存占用情况
	bool flag = true;

	cout << "flag 的打印值为：" << flag << "\n" << "flag 的空间占用为：" << sizeof(flag) << endl;
	//创建bool型变量，赋值为false，并返回内存占用情况
	bool flag_2 = false;

	cout << "flag_2 的打印值为：" << flag_2 << "\n" << "flag_2 的空间占用为：" << sizeof(flag_2) << endl;

	//返回值中，0为假，1为真
	system("pause");
	return 0;
}
