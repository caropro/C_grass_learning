#include <iostream>
using namespace std;

int main_12()
{
	//c风格类型 char[]
	//等号后要使用双引号包含字符串，和之前单个字符时不同
	//char a='a'
	//char a[]="a"
	char char_c[] = "hello world";
	cout << char_c << endl;

	//c++风格类型 string
	//现在已经不用再包含下方的头文件了
	//#include <string>
	string char_c_pp = "hello world";
	cout << char_c_pp << endl;

	system("pause");
	return 0;
}