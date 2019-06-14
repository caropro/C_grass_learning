#include <iostream>
#include <string>
using namespace std;
#include <fstream>

int main_34()
{
	
	//二进制写入
	//创建流对象，可以在创建的时候就设置好打开方式
	ofstream ofs("person.txt", ios::out | ios::binary);
	//打开文件
	//ofs.open("person.txt", ios::out | ios::binary);

	char test[] = "几把";
	ofs.write((const char*)& test, sizeof(test));

	ofs.close();
	

	ifstream ifs("person.txt", ios::in | ios::binary);

	char test2[64] = {0};
	ifs.read((char *)&test2, sizeof(test2));

	cout << test2 << endl;
	ifs.close();

	system("pause");
	return 0;
}