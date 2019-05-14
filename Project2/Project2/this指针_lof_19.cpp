#include <iostream>
using namespace std;

class test_class_19 
{
public:
	test_class_19(int value)
	{
		//当形参名称与对象内属性名称相同的时候
		//使用this指针，可以指向当前函数所在对象
		this->value = value;
	}
	//引用类型函数，之所以返回引用对象，是为了返回修改后的对象自身。
	//test_class_19 *或者返回当前类型函数指针，再解引用
	test_class_19& add_value(const test_class_19& t)
	{
		this->value += t.value;
		//this是当前对象的指针，返回解引用后的，就是当前对象自身。
		return *this;
	}
	void show_value()
	{
		if (this == NULL)
		{
			cout << "当前指针为空" << endl;
			return;
		}
		cout << "当前数值为：" << this->value << endl;
	}
	int value;
};

void func_1()
{
	test_class_19 t1(19);
	cout << "当前对象含有数据为：" << t1.value << endl;

	test_class_19 t2(29);
	cout << "当前t2对象含有数据为：" << t2.value << endl;
	//因为每次调用函数之后都返回对象自身，所以可以连续调用
	//链式编程思想
	t2.add_value(t1).add_value(t1);
	cout << "当前t2对象含有数据为：" << t2.value << endl;


	test_class_19 * t3=NULL;
	t3->show_value();

}



int main_19()
{
	func_1();
	system("pause");
	return 0;
}