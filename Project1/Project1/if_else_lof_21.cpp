#include <iostream>
using namespace std;

int main_21()
{
	int score;
	//输入分数
	cout << "请输入要查询的分数：" << endl;
	cin >> score;

	cout << "当前输入的分数为：" << score << endl;

	//进行判断
	if (score > 600)
	{
		cout << "超过分数线" << endl;
	}
	//二次判断
	else if (score == 600)
	{
		cout << "压线" << endl;
	}
	//否则，前面判断都不符合的时候
	else
	{
		cout << "未通过，落选" << endl;
	}
	cout << "查询结束" << endl;
	system("pause");
	return 0;
}