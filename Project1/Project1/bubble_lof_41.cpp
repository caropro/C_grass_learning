#include <iostream>
using namespace std;

int main_41()
{
	//冒泡排列，从小到大进行排列
	int arr[] = { 9,3,2,5,4,1,6,7,8 };
	int tmp;
	//需要做n-1次的轮转就可以排列完成
	for (int i = 0; i < _countof(arr) - 1; i++)
	{
		//从首回合轮转开始，每次进行减1次的排序
		for (int k = 0;k< _countof(arr) - i-1; k++)
		{
			//例如9个数字，首回合做8次比对找出最大值
			//第二回合做7次找出第二大的，以此类推。
			if (arr[k] > arr[k + 1])
			{
				tmp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = tmp;
			}

		}
	}
	for (int key = 0; key < _countof(arr); key++)
	{
		cout << "冒泡输出：" << arr[key]<<endl;
	}
	system("pause");
	return 0;
}