#include <iostream>
using namespace std;
#include <math.h>

int main_29()
{
	int num = 100;
	int first_num;
	int second_num;
	int third_num;
	do 
	{
		first_num = num / 100;
		second_num = (num - first_num * 100) / 10;
		third_num = (num - first_num * 100 - second_num * 10);
		if ((pow(first_num,3) + pow(second_num,3) + pow(third_num,3)) == num)
		{
			cout << num << endl;
		}
		num++;
	}
	while (num < 1000);

	cout << "所有水仙数已经列出" << endl;
	system("pause");
	return 0;
}