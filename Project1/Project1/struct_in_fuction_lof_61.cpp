#include <iostream>
using namespace std;
//����ṹ��
struct student
{
	string name;
	int age;
	int score;
};
//ֵ���ݵ�function
void printS1(student s1)
{
	s1.score += 15;
	cout << "��ֵ��ʽ����" << endl;
	cout << "ѧ��������" << s1.name << "\nѧ�����䣺" << s1.age << "\nѧ��������" << s1.score << endl;
}
//��ַ���ݵ�function
void printS2(student * s1)
{
	s1->score += 15;
	cout << "����ַ��ʽ����" << endl;
	cout << "ѧ��������" << s1->name << "\nѧ�����䣺" << s1->age << "\nѧ��������" << s1->score << endl;
}

int main_61()
{
	student s1 = { "С��",15,76 };

	//��ֵ����
	printS1(s1);

	cout << "����������" << endl;
	cout << "ѧ��������" << s1.name << "\nѧ�����䣺" << s1.age << "\nѧ��������" << s1.score << endl;

	//����ַ����
	printS2(&s1);

	cout << "����������" << endl;
	cout << "ѧ��������" << s1.name << "\nѧ�����䣺" << s1.age << "\nѧ��������" << s1.score << endl;

	system("pause");
	return 0;
}