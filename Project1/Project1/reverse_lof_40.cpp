#include <iostream>
using namespace std;

int main_40()
{
	//声明待排序的数组
	int arr[] = { 1,5,8,3,2,4,6,7 };
	//声明一个同等位数的空数组
	int new_arry[_countof(arr)];
	int tmp = 0;
	for (int i = 0; i < _countof(arr); i++)
	{
		//临时存储数值
		tmp = arr[i];
		//进行循环比对大小
		for (int j = 0; j < _countof(new_arry); j++)
		{
			if (tmp > new_arry[j])
			{
				for (int k=(_countof(new_arry)-1);k>j;k--)
				{
					new_arry[k] = new_arry[k - 1];
				}
				new_arry[j] = tmp;
				break;
			}
		}
	}
	// "从大到小的排序" 
	for (int key = 0; key < _countof(new_arry); key++)
	{
		cout << "输出数值"<<key<<"："<< new_arry[key] << endl;
	}
	
	//声明一个反向的数组
	int reverse[_countof(arr)];
	for (int i = 0; i < _countof(arr); i++)
	{
		reverse[_countof(arr) -1- i] = arr[i];
	}
	// "反向排序" 
	for (int key2 = 0; key2 < _countof(reverse); key2++)
	{
		cout << "反向输出数值" << key2 << "：" << reverse[key2] << endl;
	}
	system("pause");
	return 0;
}