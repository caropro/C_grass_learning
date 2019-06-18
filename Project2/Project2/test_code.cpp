#include "worker.h"
#include "boss.h"
#include "employee.h"
#include "manager.h"


void test_worker()
{
	//声明父类的空指针，来指向并调用子类的函数
	worker* worker_test = NULL;

	worker_test = new employee(1, "张三", 1);
	worker_test->show_info();
	//回收点这块内存
	delete worker_test;

	worker_test = new Manager(2, "李四", 2);
	worker_test->show_info();
	//回收点这块内存
	delete worker_test;

	worker_test = new Boss(3, "王五", 3);
	worker_test->show_info();
	//回收点这块内存
	delete worker_test;

}

int main()
{
	test_worker();
	system("pause");
	return 0;
}