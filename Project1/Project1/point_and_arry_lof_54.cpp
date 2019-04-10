#include <iostream>
using namespace std;

int main_54()
{
	int arry[] = { 1,2,3,4,5 };

	int * p = arry;//arry 自身就是其内存首地址

	for (int i = 0; i < _countof(arry); i++)
	{
		cout << "数组中的值为：" << *p << endl;
		p++;//指针后移
	}


	system("pause");
	return 0;
}