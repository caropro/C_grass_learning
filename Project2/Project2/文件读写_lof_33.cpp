#include <iostream>
using namespace std;
//����ͷ�ļ�
#include <fstream>
#include <string>

int main_33()
{
	//����������
	ofstream ofs;
	//ָ���򿪷�ʽ
	ofs.open("test_b.txt",ios::out|ios::binary);
	//д������
	ofs << "test string information" << endl;
	//�ر��ļ�
	ofs.close();

	//������ȡ������
	ifstream ifs;
	//��ָ���ļ�
	ifs.open("test_b.txt", ios::in);
	//�ж��ļ��Ƿ�ɹ���
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		system("pause");
		return 0;
	}
	//��ȡ
	//��ȡ��ʽһ���ַ�����
	/*
	char buf[1024] = { 0 };
	//û����Ϣ�����һ��
	while (ifs>>buf)
	{
		cout << buf << endl;
	}
	*/


	//��ȡ��ʽ��
	/*
	char buf[1024] = { 0 };
	//���ж�ȡ
	while (ifs.getline(buf,sizeof(buf)))
	{
		cout << buf << endl;
	}
	*/

	//��ȡ��ʽ��
	/*
	//�ַ���
	string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}
	*/

	//��ȡ��ʽ��
	//����ַ���ȡ
	char c;
	while ((c = ifs.get())!=EOF)//end of file
	{
		cout << c;
	}

	//�ر��ļ�
	ifs.close();


	system("pause");
	return 0;
}