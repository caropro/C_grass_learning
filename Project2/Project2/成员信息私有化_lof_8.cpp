#include <iostream>
using namespace std;

class Person
{
public:
	//���ù����ķ��ʷ��������޸�˽�����Ե�ֵ
	void set_Name(string name_input)
	{
		name = name_input;
	}
	//���ù����ķ��ʷ���������ȡ˽�����Ե�ֵ
	string get_Name()
	{
		return name;
	}
//����˽������
private:
	string name;
	int age;
	int value;
};



int main_8()
{
	Person p1;
	p1.set_Name("���ֵ�");
	cout << "���������" << p1.get_Name() << endl;
	system("pause");
	return 0;
}