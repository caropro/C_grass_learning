#include <iostream>
using namespace std;

int main_44()
{
	int score_table[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	int student_arr[3] = {};
	for (int per = 0; per < _countof(score_table); per++)
	{
		for (int sub = 0; sub <_countof(score_table[per]); sub++)
		{
			student_arr[per] = student_arr[per]+score_table[per][sub];
		}
	}
	int zhangsan = student_arr[0];
	int lisi = student_arr[1];
	int wangwu = student_arr[2];

	cout << "张三成绩：" << zhangsan << endl;
	cout << "李四成绩：" << lisi << endl;
	cout << "王五成绩：" << wangwu << endl;

	system("pause");
	return 0;
}