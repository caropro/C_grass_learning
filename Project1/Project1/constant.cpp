#include <iostream>

using namespace std;

//define 定义宏常量
#define Day 7

int main4()
{
	//Day = 15;常量不可变，修改会报错
	cout << "一周共有" << Day << "天" << endl;

	//const 修饰变量（constant）
	const int weeks = 52;
	//weeks=14;const修饰的也为常量，常量不可变，修改会报错
	cout << "一年共有" << weeks << "周" << endl;

	return 0;
}