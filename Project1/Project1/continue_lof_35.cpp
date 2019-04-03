#include <iostream>
using namespace std;

int main_35()
{
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			//使用continue跳过当前循环内容
			printf("%d\n",i);
			continue;
		}
		cout << "pass" << endl;

	}

	system("pause");
	return 0;
}