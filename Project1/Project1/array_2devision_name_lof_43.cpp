#include <iostream>
using namespace std;

int main_43()
{
	int arr_1[][3] = { 1,2,3,4,5,6,7,8,9 };

	cout << "内存首地址：" << arr_1 << "\n十进制首地址：" << (int)& arr_1 << endl;
	cout << "第一行内存首地址：" << arr_1[0] << "\n十进制首地址：" << (int)& arr_1[0] << endl;
	cout << "第二行内存首地址：" << arr_1[1] << "\n十进制首地址：" << (int)& arr_1[1] << endl;

	//求内存占用空间大小
	cout << "二维数组大小：" << sizeof(arr_1)<<endl;
	cout << "二维数组大小：" << sizeof(arr_1[0])<<endl;
	cout << "二维数组大小：" << sizeof(arr_1[0][0])<<endl;

	//求行列个数
	cout << "二维数组行数方式1：" << _countof(arr_1) << endl;
	cout << "二维数组行数方式2：" << sizeof(arr_1) / sizeof(arr_1[0]) << endl;

	cout << "二维数组列数方式1：" << _countof(arr_1[0]) << endl;
	cout << "二维数组列数方式2：" << sizeof(arr_1[0]) / sizeof(arr_1[0][0]) << endl;
	system("pause");
	return 0;
}