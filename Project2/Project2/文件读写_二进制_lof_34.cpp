#include <iostream>
#include <string>
using namespace std;
#include <fstream>

int main_34()
{
	
	//������д��
	//���������󣬿����ڴ�����ʱ������úô򿪷�ʽ
	ofstream ofs("person.txt", ios::out | ios::binary);
	//���ļ�
	//ofs.open("person.txt", ios::out | ios::binary);

	char test[] = "����";
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