#include <iostream>
using namespace std;

int main_37()
{
	//数组三种定义形式
	//1.数据类型 数组名[数组长度];
	int arrays_1[4];

	arrays_1[0] = 5;
	arrays_1[1] = 4;
	arrays_1[2] = 3;
	arrays_1[3] = 2;

	cout <<"数组1的长度为："<<_countof(arrays_1) << endl;
	for (int i = 0; i < _countof(arrays_1); i++)
	{
		printf("数组1的第%d个位置的值为：%d\n", i,arrays_1[i]);
	}
	//2.数据类型 数组名[数组长度]={值1，值2, …};
	int arrays_2[4] = { 1,2,3,4 };

	cout << "数组2的长度为：" << _countof(arrays_2) << endl;
	for (int i = 0; i < _countof(arrays_2); i++)
	{
		printf("数组2的第%d个位置的值为：%d\n", i, arrays_2[i]);
	}
	//3.数据类型 数组名[]={值1,值2,值3…};
	int arrays_3[] = { 1,2,3,4,5,6 };
	
	cout << "数组3的长度为：" << _countof(arrays_3) << endl;
	for (int i = 0; i < _countof(arrays_3); i++)
	{
		printf("数组3的第%d个位置的值为：%d\n", i, arrays_3[i]);
	}

	system("pause");
	return 0;
}