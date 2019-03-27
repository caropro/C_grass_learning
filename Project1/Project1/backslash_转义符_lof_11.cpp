#include <iostream>
using namespace std;

int main_11()
{
	// 换行符：\n
	cout << "hello world\n";
	
	// 反斜线 \\

	cout << "test1\\test2" << endl;

	// 水平制表符：\t 可以整齐的输出数据
	cout << "test1\ttest2" << endl;
	cout << "tes\ttest2" << endl;
	cout << "te\ttest2" << endl;
	// 警报符：\a 会有警告提示音
	cout << "\aalert！！！" << endl;

	system("pause");
	return 0;
}