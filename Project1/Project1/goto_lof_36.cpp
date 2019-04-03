#include <iostream>
using namespace std;
int main_36()
{
	int i = 0;
	for (; i < 100; i++)
	{
		cout << i << "times" << endl;
		if (i == 55)
		{
			goto MARK_1;//跳转到标记位置
		}
	}

	MARK_1://标记名称
	cout << "mark 1 place";

	system("pause");
	return 0;
}