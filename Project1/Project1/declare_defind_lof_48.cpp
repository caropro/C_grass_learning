#include <iostream>
using namespace std;

//声明函数，但在此处不定义
int max(int num1, int num2);

int main_48()
{
	int a = 10;
	int b = 19;

	//如果声明在调用后，会失败
	//所以可以先声明函数，之后再定义
	cout << "最大值是：" << max(a, b) << endl;

	system("pause");
	return 0;
}
//声明之后定义函数
int max(int num1, int num2)
{
	return num1 > num2 ? num1 : num2;
}