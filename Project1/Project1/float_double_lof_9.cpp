#include <iostream>
using namespace std;

int main_9()
{
	//������ float��ĩβ����fʱ��Ĭ��Ϊdouble�������͡�

	float pi_f = 3.14f;

	cout << "�����ȸ�������" << pi_f << endl;
	cout << "�����ȸ�����ռ�ÿռ��С��" << sizeof(pi_f) << endl;
	//˫���� double
	 
	double pi_d = 3.14;

	cout << "˫���ȸ�������" << pi_d << endl;
	cout << "˫���ȸ�����ռ�ÿռ��С��" << sizeof(pi_d) << endl;

	//��ѧ������
	float e_f_1 = 3e2;
	cout << "3����10��2�η�--->" << e_f_1 << endl;
	
	float e_f_2 = 3e-2;
	cout << "3����0.1��2�η�--->" << e_f_2 << endl;


	system("pause");
	return 0;
}
