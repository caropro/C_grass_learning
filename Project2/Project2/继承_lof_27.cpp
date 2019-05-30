#include <iostream>
using namespace std;

class Base_level
{
public:
	int base_value;
};

class branch_a : virtual public Base_level
{
};

class branch_b : virtual public Base_level
{
};
//继承两个父类的数据，base_value是上层三类中都有的同名属性，看继承后保留哪个
class test_class :public branch_a, public branch_b
{
};

void test_func_27()
{
	test_class t;
	//修改自身的值
	t.test_class::base_value = 22;
	cout << "t 的basevalue" << t.base_value << endl;
	//修改父类a的值
	t.branch_a::base_value = 33;//{vbptr} 这类属性由于虚继承，virtual base pointer
	cout << "t 的basevalue" << t.base_value << endl;
	//修改父类b的值
	t.branch_b::base_value = 55;
	cout << "t 的basevalue" << t.base_value << endl;
	//而三次修改，都会修改自身这个属性的值，并且是同一个

}

int main_27()
{
	test_func_27();
	system("pause");
	return 0;
}
