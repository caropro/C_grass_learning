#include <iostream>
using namespace std;

int main_22()
{
	//if 嵌套语句
	int score;
	cout << "输入判断分数：" << endl;
	cin >> score;
	//进行if判断
	if (score >= 60)
	{
		if (score == 100)
		{
			cout << "您的得分：" << score << "---》满分！！" << endl;
		}
		else if (score > 90)
		{
			cout << "您的得分：" << score << "---》优秀" << endl;
		}
		else if (score > 75)
		{
			cout << "您的得分：" << score << "---》良好" << endl;
		}
		else
		{
			cout << "您的得分：" << score << "---》合格" << endl;
		}
	}
	else
	{
		cout << "未能及格" << endl;
	}
	system("pause");
	return 0;
}
