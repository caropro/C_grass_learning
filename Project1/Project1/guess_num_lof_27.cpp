#include <iostream>
using namespace std;
//为了使用time需要包含头文件
#include <ctime>

int main()
{
	//猜数字
	//产生一个范围内的随机数字
	//rand是伪随机数，每次起始值都是固定的
	//需要添加随机数种子，利用系统时间生成
	srand((unsigned int)time(NULL));

	int result = rand() % 50;
	cout << result << endl;
	//进行循环
	int input_num;

	while (true)
	{
		//让用户输入数字
		cout << "请输入猜测的数字：" << endl;
		cin >> input_num;
		//比大小
		if (input_num==result)
		{
			cout << "恭喜猜中" << endl;
			break;
		}
		else if (input_num > result)
		{
			cout << "猜测的数值大了" << endl;
		}
		else
		{
			cout << "猜测的数值小了" << endl;
		}

	}
	cout << "游戏结束" << endl;
	system("pause");
	return 0;
}