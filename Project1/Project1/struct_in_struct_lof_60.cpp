#include <iostream>
using namespace std;
//����ѧ���ṹ��
struct student
{
	string name;
	int id;
	int score;
};
//�����ʦ�ṹ�壬�ڲ�����ѧ���ṹ������
struct teacher
{
	int id;
	int age;
	string name;
	student st;
};

int main_60()
{
	//Ƕ�׷��ʽ��и�ֵ
	teacher t1;
	t1.age = 33;
	t1.id = 24;
	t1.name = "����";
	t1.st.name = "С֣";
	t1.st.id = 44;
	t1.st.score = 87;
	//Ƕ�׷��ʽ��в�ѯ
	cout << "��ʦ������" << t1.name << endl << "��ʦ���䣺" << t1.age << endl
		<< "��ʦ��ţ�" << t1.id << endl << "ѧ��������" << t1.st.name << endl
		<< "ѧ����ţ�" << t1.st.id << endl << "ѧ���ɼ���" << t1.st.score << endl;

	system("pause");
	return 0;
}
