#include <iostream>
using namespace std;

/*
����Ȩ��
publicȨ�ޣ�����Ȩ�ޣ���Ա ���ڿ��Է��� ������Է���
protectedȨ�ޣ�����Ȩ�ޣ���Ա ���ڿ��Է��� ���ⲻ���Է��� ����ɼ̳д�����
privateȨ�ޣ�˽��Ȩ�ޣ���Ա ���ڿ��Է��� ���ⲻ���Է��� ���಻�ɼ̳д�����
*/

class Person
{
public:
	//����Ȩ�޵����ԣ�������ⶼ���Է���
	string name;
	int age;
	//˽�����ԣ�ֻ���ڲ����Է���
private:
	int password;
	//�ܱ������ԣ�ֻ���ڲ����Է���
protected:
	int salary;
public:
	void print_info()
	{
		//����ĺ����ڲ����Խ��и�ֵ���������ⲿ�����Ļ��൱�����¶���Ȩ��
		password = 1111111;
		salary = 22222;
		cout <<"������"<< name << endl;
		cout << "���䣺" << age << endl;
		cout << "���룺" << password << endl;
		cout <<"нˮ��"<< salary << endl;
	};
};


int main_7()
{
	Person p1;
	p1.name = "����";
	p1.age = 48;
	p1.print_info();
	system("pause");
	return 0;
}
