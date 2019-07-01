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

	//测试代码
	for (int i = 0; i < m_EmpNum; i++)
	{
		cout << "职工号：" << this->m_EmpArray[i]->w_id
			<< "职工姓名：" << this->m_EmpArray[i]->w_name
			<< "职工编号：" << this->m_EmpArray[i]->w_dep << endl;
	}
	
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


void manage_system::Show_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			//利用多态接口，不同员工类的同一个显示方式
			this->m_EmpArray[i]->show_info();
		}
	}
	system("pause");
	system("cls");
}

int manage_system::IsExist(int id)
{
	int index = -1;
	//筛选此id编号之前的内容，如果id内容与编号一致，返回这个编号
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->w_id ==id)
		{
			index = i;
			break;
		}
	}
	return index;
}

void manage_system::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在，或记录为空！" << endl;
	}
	else
	{
		//按职工编号删除
		cout << "请输入想要删除的职工号：" << endl;
		int id = 0;
		cin >> id;
		//判断这个id是否存在
		int index = this->IsExist(id);
		//如果返回的不是-1，则存在
		if (index != -1)
		{
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				//删除的方式是，这个位置后的数据前移
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;

			this->save();//删除后保存数据到文件
			cout << "删除成功！" << endl;
		}
		else
		{
			cout << "删除失败，未找到该职工" << endl;
		}

	}
	system("pasue");
	system("cls");
}

void manage_system::Mod_Emp()
{
	//文件不存在的时候
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "请输入修改职工的编号：" << endl;
		int id;
		cin >> id;
		//查找员工是否存在
		int ret = this->IsExist(id);
		if (ret != -1)
		{
			delete this->m_EmpArray[ret];

			int newId = 0;
			string newName = "";
			int dSelect = 0;
			
			cout << "请输入新名字：" << endl;
			cin >> newName;

			cout << "输入新的岗位：" << endl;
			cout << "1.普通职工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
			cin >> dSelect;

			worker* new_worker = NULL;
			switch (dSelect)
			{
			case 1:
				new_worker = new employee(newId, newName, dSelect);
				break;
			case 2:
				new_worker = new Manager(newId, newName, dSelect);
				break;
			case 3:
				new_worker = new Boss(newId, newName, dSelect);
				break; 
			default:
				break;
			}
			this->m_EmpArray[ret] = new_worker;

			cout << "修改成功" << this->m_EmpArray[ret]->getDepName << endl;

			this->save();
		}
		else
		{
			cout << "查无此人，修改失败" << endl;
		}
	}
	system("pause");
	system("cls");
}

void manage_system::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "请输入查找的方式：" << endl;
		cout << "1.按职工编号查找" << endl;
		cout << "2.按姓名查找" << endl;

		int select = 0;
		cin >> select;

		if (select == 1)//按职工编号查找
		{
			int id;
			cout << "请输入查找的职工编号：" << endl;
			cin >> id;

			int ret = IsExist(id);
			if (ret != -1)
			{
				cout << "查找成功！该职工信息如下：" << endl;
				this->m_EmpArray[ret]->show_info();
			}
			else
			{
				cout << "查找失败，查无此人" << endl;
			}
		}
		else if (select == 2)//按姓名查找
		{
			string name;
			cout << "请输入查找的姓名：" << endl;
			cin >> name;

			bool flag = false;//查找到的标志
			for (int i = 0; i < m_EmpNum; i++)//逐个对比职工名称
			{
				if (m_EmpArray[i]->w_name == name)
				{
					cout << "查找成功！该职工信息如下：" << endl;
					this->m_EmpArray[i]->show_info();

					flag = true;

				}
			}
			if (flag == false)
			{
				cout << "查找失败，查无此人" << endl;
			}
		}
		else
		{
			cout << "输入选项有误" << endl;
		}
		
	}
	system("pause");
	system("cls");
}

void manage_system::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "请选择排序方式：" << endl;
		cout << "1.按职工编号进行升序排列" << endl;
		cout << "2.按职工编号进行降序排列" << endl;

		int select = 0;
		cin >> select;

		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i;
			for (int j = i + 1; j < m_EmpNum; j++)
			{
				if (select == 1)//升序
				{
					if (m_EmpArray[minOrMax]->w_id > m_EmpArray[j]->w_id)
					{
						minOrMax = j;
					}
				}
				else//降序
				{
					if (m_EmpArray[minOrMax]->w_id < m_EmpArray[j]->w_id)
					{
						minOrMax = j;
					}
				}
			}
			//相当于从第一个开始往后排，到末尾时停止
			if (i != minOrMax)
			{
				worker* temp = m_EmpArray[i];
				m_EmpArray[i] = m_EmpArray[minOrMax];
				m_EmpArray[minOrMax] = temp;
			}
		}
		cout << "排序成功，排序结果为：" << endl;
		this->save();
		this->Show_Emp();
	}
}

void manage_system::Clean_File()
{
	cout << "确认清空？" << endl;
	cout << "1.确认" << endl;
	cout << "2.返回" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		//打开模式ios::trunc如果文件存在，删除文件并重新创建
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close;
		
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i] != NULL)
				{
					//回收所有堆区指针信息
					delete this->m_EmpArray[i];
				}
			}
			//总计数归零
			this->m_EmpNum = 0;
			//回收数组本身
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_FileIsEmpty = true;
		}
		cout << "清空成功！" << endl;
	}
	system("pause");
	system("cls");
}

