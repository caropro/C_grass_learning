#include "company_manager.h"
#include "worker.h"
#include "boss.h"
#include "employee.h"
#include "manager.h"

manage_system::manage_system()
{
	cout << "重新定义的构造函数" << endl;
	//初始化属性

	//先从文件读取信息
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	//如果文件不存在，进行初始化，并关闭此文件流
	if (!ifs.is_open())
	{
		cout << "存储文件不存在" << endl;
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}
	//如果文件存在，但是为空的时候
	char ch;
	ifs >> ch;//用来读文件尾的标识，如果是空文件，读取完标识后就没有内容了
	if (ifs.eof())
	{
		cout << "文件存在，但为空！" << endl;
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}

	//文件存在，且有数据
	int num = this->get_EmpNum();
	cout << "职工个数为：" << num << endl;
	this->m_EmpNum = num;
	this->m_EmpArray = new worker *[this->m_EmpNum];

	//初始化职工
	init_Emp();
	
}

manage_system::~manage_system()
{
	cout << "重新定义的析构函数" << endl;
}

void manage_system::show_menu()
{
	cout << "重新定义的显示函数" << endl;
	cout << "**************************************" << endl;
	cout << "*********欢迎使用员工管理系统*********" << endl;
	cout << "*************0.退出系统***************" << endl;
	cout << "*************1.添加员工***************" << endl;
	cout << "*************2.显示员工信息***********" << endl;
	cout << "*************3.删除离职员工***********" << endl;
	cout << "*************4.修改员工信息***********" << endl;
	cout << "*************5.查找员工信息***********" << endl;
	cout << "*************6.按照编号排序***********" << endl;
	cout << "*************7.清空所有信息***********" << endl;
	cout << "**************************************" << endl;
}

void manage_system::quit_sys()
{
	cout << "欢迎下次继续使用" << endl;
	system("pause");
	exit(0);//退出程序
}

void manage_system::save()
{
	//创建输出流
	ofstream ofs;
	//打开文件，方式为输出
	ofs.open(FILENAME, ios::out);

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->w_id << " "
			<< this->m_EmpArray[i]->w_name << " "
			<< this->m_EmpArray[i]->w_dep << endl;
	}
	ofs.close();
}

void manage_system::Add_Emp()
{
	cout << "请输入添加员工的数量：" << endl;
	//保存创建人数的变量
	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		//添加
		//计算增加后的空间大小
		int newSize = this->m_EmpNum + addNum;//等于原有人数加上新增人数

		//开辟新空间
		//二级指针，指向指针数组
		worker** newspace = new worker * [newSize];

		//需要将原有数据先移到新开辟的空间
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newspace[i] = this->m_EmpArray[i];
			}
		}
		//添加新的数据
		for (int i = 0; i < addNum; i++)
		{
			int id;//职工编号
			string name;//职工姓名
			int dep_select;//部门选择

			cout << "请输入第" << i + 1 << "位新员工的编号：" << endl;
			cin >> id;

			cout << "请输入第" << i + 1 << "位新员工的姓名：" << endl;
			cin >> name;

			cout << "请选择员工的岗位：" << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
			cin >> dep_select;

			//根据岗位不同，创建不同的对象
			worker * worker_current = NULL;
			switch (dep_select)
			{
			case 1:
				worker_current = new employee(id, name, 1);
				break;
			case 2:
				worker_current = new Manager(id, name, 1);
				break;
			case 3:
				worker_current = new Boss(id, name, 1);
				break;
			default:
				break;
			}
			//原有人数基础上，进行数据添加
			newspace[this->m_EmpNum + i] = worker_current;
		}
		//释放原有的存储
		delete[] this->m_EmpArray;

		//更改新空间的访问指向
		this->m_EmpArray = newspace;

		//更新当前的职工人数
		this->m_EmpNum = newSize;

		//更新职工不为空标志
		this->m_FileIsEmpty = false;

		//提示添加成功
		cout << "成功添加" << addNum << "名新员工" << endl;
		//保存文件
		this->save();
	}
	else
	{
		cout << "输入数额不符合要求" << endl;
	}
	//按任意键后清屏回到上一目录
	system("pause");
	system("cls");
}

int manage_system::get_EmpNum()
{
	//从文件记录中读取人数信息，来方便拓展数组大小
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	//临时记录三个信息
	int id;
	string name;
	int dep_id;

	int num = 0;
	//成功从文件读取三个信息为一条职工信息
	while (ifs >> id && ifs >> name && ifs >> dep_id)
	{
		num++;
	}
	ifs.close();//读取完人数信息后关闭文件
	return num;//返回人数信息
}

void manage_system::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dep_id;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dep_id)
	{
		worker* c_worker = NULL;//创建员工类指针
		if (dep_id == 1)//普通员工
		{
			c_worker = new employee(id, name, dep_id);
		}
		if (dep_id == 2)//经理
		{
			c_worker = new Manager(id, name, dep_id);
		}
		if (dep_id == 3)//老板
		{
			c_worker = new Boss(id, name, dep_id);
		}

		this->m_EmpArray[index] = c_worker;
		index++;

	}
}