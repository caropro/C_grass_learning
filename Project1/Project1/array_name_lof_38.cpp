#include <iostream>
using namespace std;

int main_38()
{

	int arr[5] = { 1,2,3,4,5 };
	cout << arr << endl;
	//通过整体占用内存大小，再通过单一元素占用情况，算出数组中同类型的元素个数有多少
	cout <<"当前数组内存占用大小："<< sizeof(arr) << endl;
	cout << "当前数组单个元素内存占用大小：" << sizeof(arr[0]) << endl;
	cout << "当前数组内的元素个数：" << sizeof(arr) / sizeof(arr[0]) << endl;
	//打印数组的内存首地址
	cout <<"内存地址为："<< arr<< endl;
	//转为十进制的显示
	cout << "十进制内存地址为：" << (int)arr << endl;
	//查看数组中元素的首地址，要在前面添加&符号
	cout << "首个元素的内存地址为：" << (int)& arr[0] << endl;//首个元素的首地址就是整个数组的首地址
	cout << "第二个元素的内存地址为：" << (int)& arr[1] << endl;//第二个元素与数组首地址相差一个元素的内存占用
	system("pause");
	return 0;
}