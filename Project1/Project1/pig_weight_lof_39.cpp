#include <iostream>
using namespace std;

int main_39()
{
	//声明数组，找出最大的数
	int pig_arr[] = { 200,300,350,250,400 };
	//声明最大值，在循环中进行判断替换
	int max_weight = 0;
	for (int i = 0; i < _countof(pig_arr); i++)
	{
		if (max_weight < pig_arr[i])
		{
			max_weight = pig_arr[i];
		}
	}
	cout << "最重的小猪为：" << max_weight << endl;

	system("pause");
	return 0;
}