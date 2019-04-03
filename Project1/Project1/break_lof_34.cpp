#include <iostream>
using namespace std;

int main_34()
{
	//switch中使用
	int condition_num = 1;
	switch (condition_num)
	{
		case 1:
			printf("condition_one with break\n");
			break;
		default:
			printf("use default switch\n");
			break;
	}
	//循环中使用
	for (int i = 1; i < 100; i++)
	{
		if (i != 13 && i % 13 == 0)
		{
			cout << "for break" << endl;
			break;
		}
	}
	//嵌套循环中使用
	for (int j = 1; j < 10; j++)
	{
		int m = 0;
		while (true)
		{
			cout << m;
			m++;
			if (m == j)
			{
				cout << "iteration break inside" << endl;
				break;
			}
		}

	}

	return 0;
}