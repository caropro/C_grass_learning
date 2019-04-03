#include <iostream>
using namespace std;

int main_25()
{
	//switch语句
	//电影评分系统
	//9+ 好片
	//8+ 优秀
	//6+ 合格
	//6- 烂片

	//提示用户输入评分
	int score;
	int level;
	cout << "请输入电影评分：" << endl;
	cin >> score;
	//限制用户评分范围
	if (score>=9)
	{
		level = 1;
	}
	else if (score >= 8)
	{
		level = 2;
	}
	else if (score >= 6)
	{
		level = 3;
	}
	else
	{
		level = 4;
	}
	//反馈用户评分
	cout << "您给出的分数为：" << score << endl;
	//反馈用户评分对应评级
	switch (level)
	{
		case 1:
			cout << "您对影片的评级为：好片" << endl;
			break;
		case 2:
			cout << "您对影片的评级为：优秀" << endl;
			break;
		case 3:
			cout << "您对影片的评级为：合格" << endl;
			break;
		default:
			cout << "您对影片的评级为：烂片" << endl;
			break;
	}
	system("pause");
	return 0;
}