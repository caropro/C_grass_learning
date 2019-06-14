#include <iostream>
using namespace std;
//导入头文件
#include <fstream>
#include <string>

int main_33()
{
	//创建流对象
	ofstream ofs;
	//指定打开方式
	ofs.open("test_b.txt",ios::out|ios::binary);
	//写入内容
	ofs << "test string information" << endl;
	//关闭文件
	ofs.close();

	//创建读取流对象
	ifstream ifs;
	//打开指定文件
	ifs.open("test_b.txt", ios::in);
	//判断文件是否成功打开
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		system("pause");
		return 0;
	}
	//读取
	//读取方式一：字符数组
	/*
	char buf[1024] = { 0 };
	//没有信息就输出一次
	while (ifs>>buf)
	{
		cout << buf << endl;
	}
	*/


	//读取方式二
	/*
	char buf[1024] = { 0 };
	//逐行读取
	while (ifs.getline(buf,sizeof(buf)))
	{
		cout << buf << endl;
	}
	*/

	//读取方式三
	/*
	//字符串
	string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}
	*/

	//读取方式四
	//逐个字符读取
	char c;
	while ((c = ifs.get())!=EOF)//end of file
	{
		cout << c;
	}

	//关闭文件
	ifs.close();


	system("pause");
	return 0;
}