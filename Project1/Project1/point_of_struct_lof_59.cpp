#include <iostream>
using namespace std;

struct student
{
	string name;
	int age;
	int index;
};

int main_59()
{
	//�����ṹ�����͵ı���
	student a;
	a.name = "Tom";
	a.age = 19;
	a.index = 14;
	//������Ӧ�ṹ�����͵�ָ�룬ָ��ṹ�����
	student* p1 = &a;
	//"->"ͨ��ָ���������ȡ�ṹ��ָ����ָ�������
	cout << "ָ��������ݣ�\n" << "������" << p1->name << "\n���䣺" << p1->age << "\nѧ�ţ�" << p1->index << endl;

	system("pause");
	return 0;
}