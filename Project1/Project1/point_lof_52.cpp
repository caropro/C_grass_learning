#include <iostream>
using namespace std;

int main_52()
{
	//空指针，指向编号为0的空间
	int* p = NULL;
	//再声明一个，看看地址有什么差别
	int* p2 = NULL;

	//NULL类型的指针不能访问，例如：*p=10

	//0~255的编号空间为系统占用内存，无法访问
	cout << "p的地址：" << p << endl;
	//打印之后发现二者指向都是0
	cout << "p2的地址：" << p2 << endl;

	//这种直接指向无权限内存地址的指针就是野指针
	//程序中应当避免出现这种情况
	int* p3 = (int*)0x1100;

	//cout<<*p4<<endl;
	system("pause");
	return 0;
}