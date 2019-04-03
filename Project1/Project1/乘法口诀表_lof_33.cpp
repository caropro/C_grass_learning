#include <iostream>
using namespace std;

int main_33()
{
	//1-9的乘法口诀循环
	for (int i = 1; i < 10; i++)
	{
		//内层循环，执行内容包含当前值，可以用do-while
		int j = 1;
		do
		{
			printf("|%d x %d = %d|",j,i,j*i);
			j++;
		} while (j <= i);
		cout << endl;
	}

	system("pause");
	return 0;
}