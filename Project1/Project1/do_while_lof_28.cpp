#include <iostream>
using namespace std;

int main_28()
{
	int i = 0;
	do
	{
		cout << i << endl;
		i++;
	} while (i < 100);
	//do while循环会先执行do内命令再进行循环判断
	//需要首次操作之后进行判断循环的时候很合适

	system("pause");
	return 0;
}