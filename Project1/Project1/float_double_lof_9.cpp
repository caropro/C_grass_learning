#include <iostream>
using namespace std;

int main_9()
{
	//单精度 float，末尾不加f时，默认为double精度类型。

	float pi_f = 3.14f;

	cout << "单精度浮点数：" << pi_f << endl;
	cout << "单精度浮点数占用空间大小：" << sizeof(pi_f) << endl;
	//双精度 double
	 
	double pi_d = 3.14;

	cout << "双精度浮点数：" << pi_d << endl;
	cout << "双精度浮点数占用空间大小：" << sizeof(pi_d) << endl;

	//科学计数法
	float e_f_1 = 3e2;
	cout << "3乘以10的2次方--->" << e_f_1 << endl;
	
	float e_f_2 = 3e-2;
	cout << "3乘以0.1的2次方--->" << e_f_2 << endl;


	system("pause");
	return 0;
}
