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
	//很像python中的列表套字典
	MyStruct test_arr[4] = {
		{" 张三",33,1},
		{"李四",25,2},
		{"王五",44,3},
		{"赵六",51,4}
	};

	test_arr[2].name = "王二狗";

	for (int i = 0; i < _countof(test_arr); i++)
	{
		cout << "姓名：" << test_arr[i].name << endl;
		cout << "年龄：" << test_arr[i].age << endl;
		cout << "编号：" << test_arr[i].id << endl;

	}

	system("pause");
	return 0;
}



