#include <iostream>
using namespace std;

class Animal
{
public:
	//������ʹ���麯��
	virtual void speak()
	{
		cout << "Animal Speaking"<<endl;
	}
};
class Wolf :public Animal
{
public:
	//��Ҫ��д�����е��麯��
	void speak()
	{
		cout << "Wolf Wolf" << endl;
	}
};

void toSpeak(Animal& ani)
{
	//���ú������ɵ���animal�࣬���������е�speak
	ani.speak();
}

//���Ժ�����ʵ����֮�����е��ú���
void test_28()
{
	Wolf wf;
	//�����ָ�룬ָ���������
	toSpeak(wf);
	//ʵ��ͬһ�����÷��������в�ͬ�ࣨ���ุ�ࣩ��ͬ�ֺ���
	Animal ani;
	toSpeak(ani);
}


int main_28()
{
	test_28();
	system("pause");
	return 0;
}



