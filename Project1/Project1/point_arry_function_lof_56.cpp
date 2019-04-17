#include <iostream>
using namespace std;

//不需要返回值的函数，进行冒泡排序
void sortbyvalue(int * arr,int len)
{
	//首层n-1次大循环
	for (int i = 0; i < (len - 1); i++)
	{
		//次层n-i-1次的比对，进行过几次大循环就可以少找几次
		for (int j = 0; j < (len - 1 - i); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			
		}
	}
}

int main_56()
{
	//声明一个数组，准备通过函数，将数组中的值从小到大排列
	int basic_arry[] = { 4,5,6,3,2,1,7,8,9,10 };
	//丢到排序函数中
	sortbyvalue(basic_arry, _countof(basic_arry));
	//打印排序后函数中的值
	for (int i = 0; i < _countof(basic_arry); i++)
	{
		cout << "数组中的值为：" << basic_arry[i] << endl;
	}

	system("pause");
	return 0;
}