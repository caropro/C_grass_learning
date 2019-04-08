#include <iostream>
using namespace std;

int main_42()
{
	//声明二维数组的几种方式
	//1.数据类型 数组名[行数][列数];
	int arr_1[2][3];
	arr_1[0][0]=1;
	arr_1[0][1]=2;
	arr_1[0][2]=3;
	arr_1[1][0]=4;
	arr_1[1][1]=5;
	arr_1[1][2]=6;
	
	//普通输出显示
	cout << arr_1[0][0] <<"|"<< arr_1[0][1] << "|" << arr_1[0][2] << endl;
	cout << arr_1[1][0] << "|" << arr_1[1][1] << "|" << arr_1[1][2] << endl;

	//嵌套输出显示
	//首层个数
	cout << _countof(arr_1) << endl;//行数，或首层嵌套个数
	for (int level_1 = 0; level_1 < _countof(arr_1); level_1++)
	{
		cout << "|";
		for (int level_2 = 0; level_2 < _countof(arr_1[level_1]); level_2++)//每行的列数，或次级嵌套的个数
		{
			cout << arr_1[level_1][level_2] << "|" ;
		}
		cout << endl;
	}

	cout << endl;
	//2.数据类型 数组名[行数][列数] = {{数据1,数据2},{数据3,数据4}};
	int arr_2[2][3] = 
	{ 
		{1,2,3},
		{4,5,6} 
	};
	for (int level_1 = 0; level_1 < _countof(arr_2); level_1++)
	{
		cout << "|";
		for (int level_2 = 0; level_2 < _countof(arr_2[level_1]); level_2++)//每行的列数，或次级嵌套的个数
		{
			cout << arr_2[level_1][level_2] << "|";
		}
		cout << endl;
	}
	cout << endl;
	//3.数据类型 数组名[行数][列数] = {数据1,数据2,数据3,数据4};
	int arr_3[2][3] = { 1,2,3,4,5,6 };
	for (int level_1 = 0; level_1 < _countof(arr_3); level_1++)
	{
		cout << "|";
		for (int level_2 = 0; level_2 < _countof(arr_3[level_1]); level_2++)//每行的列数，或次级嵌套的个数
		{
			cout << arr_3[level_1][level_2] << "|";
		}
		cout << endl;
	}
	cout << endl;
	//4.数据类型 数组名[][列数] = {数据1,数据2,数据3,数据4};
	int arr_4[][3] = { 1,2,3,4,5,6,7,8,9};
	for (int level_1 = 0; level_1 < _countof(arr_4); level_1++)
	{
		cout << "|";
		for (int level_2 = 0; level_2 < _countof(arr_4[level_1]); level_2++)//每行的列数，或次级嵌套的个数
		{
			cout << arr_4[level_1][level_2] << "|";
		}
		cout << endl;
	}
	cout << endl;

	system("pause");
	return 0;
}