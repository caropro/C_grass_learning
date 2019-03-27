#include <iostream>
using namespace std;

int main_10()
{
	//char只能用单引号，引号内只能有单个字符
	char ch_a = 'a';

	cout << "char输出的值" << ch_a << endl;

	cout << "char字符型 占用空间大小:" << sizeof(ch_a) << endl;
	//返回char对应的ASCII码
	cout << "char字符型 转int类型:" << (int)ch_a << endl;

	system("pause");
	return 0;
}