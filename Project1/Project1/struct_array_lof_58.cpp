#include <iostream>
using namespace std;

struct MyStruct
{
	string name;
	int age;
	int id;
};

int main_58()
{
	//����python�е��б����ֵ�
	MyStruct test_arr[4] = {
		{" ����",33,1},
		{"����",25,2},
		{"����",44,3},
		{"����",51,4}
	};

	test_arr[2].name = "������";

	for (int i = 0; i < _countof(test_arr); i++)
	{
		cout << "������" << test_arr[i].name << endl;
		cout << "���䣺" << test_arr[i].age << endl;
		cout << "��ţ�" << test_arr[i].id << endl;

	}

	system("pause");
	return 0;
}



