#include <iostream>
using namespace std;
//�����е���ֵ
const double PI = 3.14;

//����������Բ�ε��࣬Ҫ���ܷ����ܳ��Ĺ���
class Circle
{
	//����Ȩ��
public:
	//�����뾶����
	int r;
	//����һ�������ܳ��ĺ���
	double calculate_pm()
	{
		return 2 * r * PI;
	}

};

class Student
{
public:
	//����ѧ����������
	string name;
	void set_name(string input_name)
	{
		name = input_name;
	}
	
	//����ѧ��ѧ������
	int id_num;
	void set_id(int id)
	{
		id_num = id;
	}
	
	//������ʾѧ������������Ϣ�ĺ���
	void show_student_info()
	{
		cout << "ѧ������Ϊ��" << name << endl;
		cout << "ѧ��ѧ��Ϊ��"<<id_num<<endl;
	}
};

int main_6()
{
	//ʵ����c1
	Circle c1;
	//Ϊc1�İ뾶��ֵ
	c1.r = 5;
	//ʹ�����к��������ܳ�ֵ
	cout << "�ܳ���ֵΪ��" << c1.calculate_pm() << endl;


	Student s1;
	//�������÷�ʽ
	s1.set_name("������");
	s1.id_num = 77;

	s1.show_student_info();

	system("pause");
	return 0;
}
