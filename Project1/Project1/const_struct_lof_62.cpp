#include <iostream>

using namespace std;

struct student
{
	string name;
	int id;
	int age;
	int score;
};

//ʹ�õ�ַ���ݣ�������������ʱ���Խ�ʡ��Դ��ֱ��ָ��
//����Ҫ������������֤���ݰ�ȫ
void printS(const student * s1)
{
	//s1->age=100 ���Ʋ���Ҫ����ֵ�޸Ĳ����Ϳ��Ա���ܵ�
	cout << "�����д�ӡ����" << endl;
	cout << "Name:" << s1->name << "\nAge:" << s1->age << "\nID:" << s1->id << "\nScore:" << s1->score << endl;
}

int main_62()
{
	student s1 = { "С��",3,15,88 };
	printS(&s1);

	cout << "��������ѧ�����䣺" << s1.age << endl;

	system("pause");
	return 0;
}