#include "worker.h"
#include "boss.h"
#include "employee.h"
#include "manager.h"


void test_worker()
{
	//��������Ŀ�ָ�룬��ָ�򲢵�������ĺ���
	worker* worker_test = NULL;

	worker_test = new employee(1, "����", 1);
	worker_test->show_info();
	//���յ�����ڴ�
	delete worker_test;

	worker_test = new Manager(2, "����", 2);
	worker_test->show_info();
	//���յ�����ڴ�
	delete worker_test;

	worker_test = new Boss(3, "����", 3);
	worker_test->show_info();
	//���յ�����ڴ�
	delete worker_test;

}

int main()
{
	test_worker();
	system("pause");
	return 0;
}