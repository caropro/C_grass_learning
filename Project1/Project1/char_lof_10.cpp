#include <iostream>
using namespace std;

int main_10()
{
	//charֻ���õ����ţ�������ֻ���е����ַ�
	char ch_a = 'a';

	cout << "char�����ֵ" << ch_a << endl;

	cout << "char�ַ��� ռ�ÿռ��С:" << sizeof(ch_a) << endl;
	//����char��Ӧ��ASCII��
	cout << "char�ַ��� תint����:" << (int)ch_a << endl;

	system("pause");
	return 0;
}