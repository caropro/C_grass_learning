#include <iostream>
using namespace std;
#include <ctime>
//����������ʽ
//1.�޲����޷���ֵ
void print_test()
{
	cout << "print test" << endl;
}
//2.�в����޷���ֵ
void print_test_value(int value)
{
	cout<<"value is��"<<value<<endl;
}
//3.�޲����з���ֵ
int return_value()
{
	srand((unsigned int)time(NULL));
	return rand() % 100;
}
//4.�в����з���ֵ
int test4(int org)
{
	cout << "+1" << endl;
	return (org + 1);
}

int main_47()
{
	//�����޲������޷���ֵ�ĺ���
	print_test();
	//�����в������޷���ֵ�ĺ���
	int num_1 = 19945;
	print_test_value(num_1);
	//�����޲������з���ֵ�ĺ���
	int num_2 = return_value();
	cout << "value of num2 is��" << num_2 << endl;
	//�����в������з���ֵ�ĺ���
	int num_3 = 10;
	cout << test4(num_3) << endl;

	system("pause");
	return 0;
}